const http = require('http');
const fs = require('fs');
const path = require('path');
const url = require('url');

const port = 3001;
const publicDir = __dirname;
const postsFile = path.join(publicDir, 'posts.json');

function ensurePostsData() {
  if (!fs.existsSync(postsFile)) {
    fs.writeFileSync(postsFile, '[]', 'utf8');
  }
}

function readPosts() {
  ensurePostsData();
  try {
    const data = fs.readFileSync(postsFile, 'utf8');
    return JSON.parse(data);
  } catch (error) {
    fs.writeFileSync(postsFile, '[]', 'utf8');
    return [];
  }
}

function writePosts(posts) {
  fs.writeFileSync(postsFile, JSON.stringify(posts, null, 2), 'utf8');
}

function serveFile(filename, contentType, response) {
  fs.readFile(path.join(publicDir, filename), (err, data) => {
    if (err) {
      response.writeHead(500, { 'Content-Type': 'text/plain' });
      response.end('Internal Server Error');
      return;
    }

    response.writeHead(200, { 'Content-Type': contentType });
    response.end(data);
  });
}

function savePost(request, response) {
  let body = '';
  request.on('data', chunk => {
    body += chunk;
  });

  request.on('end', () => {
    try {
      const post = JSON.parse(body);
      if (!post || !post.title || !post.body || typeof post.id !== 'number' || typeof post.userId !== 'number') {
        response.writeHead(400, { 'Content-Type': 'application/json' });
        response.end(JSON.stringify({ error: 'Invalid post data.' }));
        return;
      }

      const posts = readPosts();
      posts.push(post);
      writePosts(posts);

      response.writeHead(201, { 'Content-Type': 'application/json' });
      response.end(JSON.stringify(post));
    } catch (error) {
      response.writeHead(400, { 'Content-Type': 'application/json' });
      response.end(JSON.stringify({ error: 'Unable to parse post data.' }));
    }
  });
}

const server = http.createServer((req, res) => {
  const parsedUrl = url.parse(req.url, true);
  const pathname = parsedUrl.pathname;

  if (pathname === '/api/create-post' && req.method === 'POST') {
    savePost(req, res);
    return;
  }

  if (pathname === '/api/posts' && req.method === 'GET') {
    const posts = readPosts();
    res.writeHead(200, { 'Content-Type': 'application/json' });
    res.end(JSON.stringify(posts));
    return;
  }

  if (pathname === '/' || pathname === '/index.html') {
    serveFile('index.html', 'text/html', res);
    return;
  }

  if (pathname === '/script.js') {
    serveFile('script.js', 'application/javascript', res);
    return;
  }

  if (pathname === '/style.css') {
    serveFile('style.css', 'text/css', res);
    return;
  }

  res.writeHead(404, { 'Content-Type': 'text/plain' });
  res.end('Not found');
});

server.listen(port, () => {
  console.log(`Server running at http://localhost:${port}`);
});
