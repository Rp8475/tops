const http = require('http');

const server = http.createServer((req, res) => {
  // Enable CORS headers
  res.setHeader('Content-Type', 'text/html; charset=utf-8');
  res.setHeader('Access-Control-Allow-Origin', '*');

  // Fetch posts from JSONPlaceholder API
  fetch('https://jsonplaceholder.typicode.com/posts')
    .then(response => response.json())
    .then(posts => {
      // Create HTML response with posts
      let html = `
        <!DOCTYPE html>
        <html lang="en">
        <head>
          <meta charset="UTF-8">
          <meta name="viewport" content="width=device-width, initial-scale=1.0">
          <title>JSONPlaceholder Posts</title>
          <style>
            body {
              font-family: Arial, sans-serif;
              margin: 20px;
              background-color: #f5f5f5;
            }
            h1 {
              color: #333;
            }
            .post {
              background-color: white;
              padding: 15px;
              margin: 10px 0;
              border-radius: 5px;
              box-shadow: 0 2px 5px rgba(0,0,0,0.1);
            }
            .post-number {
              color: #0066cc;
              font-weight: bold;
            }
          </style>
        </head>
        <body>
          <h1>📝 Posts from JSONPlaceholder API</h1>
          <p>Total posts: <strong>${posts.length}</strong></p>
      `;

      posts.forEach((post, index) => {
        html += `
          <div class="post">
            <span class="post-number">Post ${index + 1}:</span> ${post.title}
          </div>
        `;
      });

      html += `
        </body>
        </html>
      `;

      res.writeHead(200);
      res.end(html);
    })
    .catch(error => {
      res.writeHead(500);
      res.end(`<h1>Error fetching posts</h1><p>${error.message}</p>`);
    });
});

server.listen(3000, () => {
  console.log(`🚀 Server running at http://localhost:3000/`);
});
