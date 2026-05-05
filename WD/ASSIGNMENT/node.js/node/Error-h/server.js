const http = require('http');
const https = require('https');
const fs = require('fs');
const path = require('path');
const url = require('url');

const port = 3000;
const publicDir = __dirname;

function serveFile(filePath, contentType, response) {
  fs.readFile(filePath, (err, data) => {
    if (err) {
      response.writeHead(500, { 'Content-Type': 'text/plain' });
      response.end('Internal Server Error');
      return;
    }

    response.writeHead(200, { 'Content-Type': contentType });
    response.end(data);
  });
}

function proxyJsonPlaceholder(requestUrl, response) {
  const targetUrl = `https://jsonplaceholder.typicode.com${requestUrl}`;

  https.get(targetUrl, res => {
    const { statusCode } = res;

    if (statusCode !== 200) {
      res.resume();
      response.writeHead(502, { 'Content-Type': 'application/json' });
      response.end(JSON.stringify({ error: `JSONPlaceholder returned status ${statusCode}` }));
      return;
    }

    let body = '';
    res.setEncoding('utf8');
    res.on('data', chunk => {
      body += chunk;
    });
    res.on('end', () => {
      response.writeHead(200, { 'Content-Type': 'application/json' });
      response.end(body);
    });
  }).on('error', err => {
    response.writeHead(502, { 'Content-Type': 'application/json' });
    response.end(JSON.stringify({ error: 'Unable to reach the public API. Please try again later.' }));
  });
}

function serveLocalPosts(query, response) {
  const userId = Number(query.userId);
  const filePath = path.join(publicDir, 'posts.json');

  fs.readFile(filePath, 'utf8', (err, data) => {
    if (err) {
      response.writeHead(500, { 'Content-Type': 'application/json' });
      response.end(JSON.stringify({ error: 'Could not load local posts data.' }));
      return;
    }

    try {
      const posts = JSON.parse(data);
      const filteredPosts = Number.isInteger(userId) && userId > 0
        ? posts.filter(post => post.userId === userId)
        : posts;

      response.writeHead(200, { 'Content-Type': 'application/json' });
      response.end(JSON.stringify(filteredPosts));
    } catch (parseError) {
      response.writeHead(500, { 'Content-Type': 'application/json' });
      response.end(JSON.stringify({ error: 'Invalid local JSON data.' }));
    }
  });
}

const server = http.createServer((req, res) => {
  const parsedUrl = url.parse(req.url, true);
  const pathname = parsedUrl.pathname;

  if (pathname === '/api/posts') {
    proxyJsonPlaceholder(parsedUrl.path, res);
    return;
  }

  if (pathname === '/api/posts-local') {
    serveLocalPosts(parsedUrl.query, res);
    return;
  }

  if (pathname === '/' || pathname === '/index.html') {
    serveFile(path.join(publicDir, 'index.html'), 'text/html', res);
    return;
  }

  if (pathname === '/script.js') {
    serveFile(path.join(publicDir, 'script.js'), 'application/javascript', res);
    return;
  }

  if (pathname === '/style.css') {
    serveFile(path.join(publicDir, 'style.css'), 'text/css', res);
    return;
  }

  res.writeHead(404, { 'Content-Type': 'text/plain' });
  res.end('Not found');
});

server.listen(port, () => {
  console.log(`Server running at http://localhost:${port}`);
});
