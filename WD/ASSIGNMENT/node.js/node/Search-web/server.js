const http = require('http');
const fs = require('fs');
const path = require('path');
const posts = require('./posts.json');

const PORT = process.env.PORT || 3000;
const PUBLIC_DIR = __dirname;

const mimeTypes = {
  '.html': 'text/html; charset=utf-8',
  '.js': 'application/javascript; charset=utf-8',
  '.css': 'text/css; charset=utf-8',
  '.json': 'application/json; charset=utf-8',
};

function sendFile(res, filePath, statusCode = 200) {
  const ext = path.extname(filePath) || '.html';
  const contentType = mimeTypes[ext] || 'application/octet-stream';
  fs.readFile(filePath, (err, data) => {
    if (err) {
      res.writeHead(500, { 'Content-Type': 'text/plain; charset=utf-8' });
      res.end('Server error');
      return;
    }
    res.writeHead(statusCode, { 'Content-Type': contentType });
    res.end(data);
  });
}

const server = http.createServer(async (req, res) => {
  const parsedUrl = new URL(req.url, `http://${req.headers.host}`);
  const pathname = parsedUrl.pathname;

  if (pathname === '/') {
    sendFile(res, path.join(PUBLIC_DIR, 'index.html'));
    return;
  }

  if (pathname === '/script.js' || pathname === '/style.css') {
    sendFile(res, path.join(PUBLIC_DIR, pathname));
    return;
  }

  if (pathname === '/api/posts') {
    const userId = parsedUrl.searchParams.get('userId');
    if (!userId || Number(userId) < 1) {
      res.writeHead(400, { 'Content-Type': 'application/json; charset=utf-8' });
      res.end(JSON.stringify({ error: 'Please provide a valid userId query parameter.' }));
      return;
    }

    const filteredPosts = posts.filter(post => String(post.userId) === String(userId));
    res.writeHead(200, { 'Content-Type': 'application/json; charset=utf-8' });
    res.end(JSON.stringify(filteredPosts));
    return;
  }

  res.writeHead(404, { 'Content-Type': 'text/plain; charset=utf-8' });
  res.end('Not found');
});

server.listen(PORT, () => {
  console.log(`Search-web server running at http://localhost:${PORT}`);
});
