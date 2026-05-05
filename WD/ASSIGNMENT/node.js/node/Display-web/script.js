fetch('https://jsonplaceholder.typicode.com/posts')
    .then(response => response.json())
    .then(data => {
        const postsDiv = document.getElementById('posts');
        data.forEach(post => {
            const postDiv = document.createElement('div');
            postDiv.className = 'post-card';

            const title = document.createElement('h2');
            title.textContent = post.title;

            const meta = document.createElement('div');
            meta.className = 'card-meta';
            meta.textContent = `Post #${post.id}`;

            const body = document.createElement('p');
            body.textContent = post.body;

            postDiv.appendChild(meta);
            postDiv.appendChild(title);
            postDiv.appendChild(body);
            postsDiv.appendChild(postDiv);
        });
    })
    .catch(error => {
        console.error('Error fetching data:', error);
        const postsDiv = document.getElementById('posts');
        postsDiv.innerHTML = '<p>Error loading posts.</p>';
    });