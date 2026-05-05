const http = require('http');
const fs = require('fs');
const path = require('path');
const url = require('url');

const port = 3003;
const publicDir = __dirname;

function serveFile(filename, contentType, response) {
  fs.readFile(path.join(publicDir, filename), (err, data) => {
    if (err) {
      response.writeHead(500, { 'Content-Type': 'text/plain' });
      response.end('Internal Server Error');
      console.error(`Error reading file ${filename}:`, err);
      return;
    }

    response.writeHead(200, { 'Content-Type': contentType });
    response.end(data);
  });
}

const server = http.createServer((req, res) => {
  const parsedUrl = url.parse(req.url, true);
  const pathname = parsedUrl.pathname;

  // Enable CORS
  res.setHeader('Access-Control-Allow-Origin', '*');
  res.setHeader('Access-Control-Allow-Methods', 'GET, POST, PUT, DELETE, OPTIONS');
  res.setHeader('Access-Control-Allow-Headers', 'Content-Type');

  // Handle preflight requests
  if (req.method === 'OPTIONS') {
    res.writeHead(200);
    res.end();
    return;
  }

  // Serve static files
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

  // Handle 404
  res.writeHead(404, { 'Content-Type': 'text/plain' });
  res.end('Not Found');
});

const serverInstance = server.listen(port, () => {
  console.log(`
╔════════════════════════════════════════════════════╗
║  Update Post (PUT Request) Server                  ║
║  Server running on: http://localhost:${port}       ║
║  Press Ctrl+C to stop                              ║
╚════════════════════════════════════════════════════╝

📝 Features:
  • PUT request to update posts
  • JSONPlaceholder API integration
  • Real-time console logging
  • Responsive web interface

🚀 Open your browser: http://localhost:${port}
  `);
});

// Graceful shutdown
process.on('SIGINT', () => {
  console.log('\n\n🛑 Server shutting down...');
  serverInstance.close(() => {
    console.log('✅ Server stopped');
    process.exit(0);
  });
});
