const updateForm = document.getElementById('updateForm');
const responseContainer = document.getElementById('response');
const postsList = document.getElementById('postsList');

function displayPostsList(posts) {
  postsList.innerHTML = '';
  const fragment = document.createDocumentFragment();
  
  posts.slice(0, 5).forEach(post => {
    const card = document.createElement('div');
    card.className = 'post-card-item';
    card.innerHTML = `
      <div class="post-item-header">
        <span class="post-item-id">#${post.id}</span>
        <span class="post-item-user">User ${post.userId}</span>
      </div>
      <h3>${post.title}</h3>
      <p>${post.body.substring(0, 80)}...</p>
    `;
    card.addEventListener('click', () => selectPost(post));
    fragment.appendChild(card);
  });
  
  postsList.appendChild(fragment);
  console.log(`✅ Loaded ${posts.slice(0, 5).length} sample posts from JSONPlaceholder`);
}

function selectPost(post) {
  document.getElementById('postId').value = post.id;
  document.getElementById('title').value = post.title;
  document.getElementById('body').value = post.body;
  
  // Scroll to form
  updateForm.scrollIntoView({ behavior: 'smooth' });
  console.log(`📍 Selected post #${post.id} to update`);
}

function fetchAndDisplayPosts() {
  console.log('📥 Fetching sample posts from JSONPlaceholder...');
  
  fetch('https://jsonplaceholder.typicode.com/posts?_limit=5')
    .then(response => response.json())
    .then(data => {
      displayPostsList(data);
    })
    .catch(error => {
      console.error('Failed to fetch posts:', error);
      postsList.innerHTML = '<p class="error-hint">Failed to load posts. You can manually enter a post ID.</p>';
    });
}

function displayMessage(message, className = 'info') {
  responseContainer.innerHTML = `<div class="status-message ${className}">${message}</div>`;
}

function displayUpdatedPost(post, postId) {
  const formattedBody = post.body.substring(0, 150) + (post.body.length > 150 ? '...' : '');
  responseContainer.innerHTML = `
    <article class="post-result-card">
      <div class="post-card-header">
        <span class="post-label">Updated Post</span>
        <span class="post-id">#${postId}</span>
      </div>
      <h2>${post.title}</h2>
      <p>${formattedBody}</p>
      <div class="post-meta">
        <div>User ID: ${post.userId}</div>
        <div>Post ID: ${post.id}</div>
      </div>
      <details class="full-content">
        <summary>View full body</summary>
        <p>${post.body}</p>
      </details>
    </article>
  `;
  
  // Log to console
  console.log('✅ Post updated successfully!');
  console.log('Updated Post Data:', post);
}

updateForm.addEventListener('submit', event => {
  event.preventDefault();

  const formData = new FormData(updateForm);
  const postId = formData.get('postId').trim();
  const title = formData.get('title').trim();
  const body = formData.get('body').trim();

  if (!postId || !title || !body) {
    displayMessage('All fields are required.', 'error');
    return;
  }

  if (postId < 1 || postId > 100) {
    displayMessage('Post ID must be between 1 and 100.', 'error');
    return;
  }

  displayMessage('Updating post...', 'loading');
  console.log(`📤 Sending PUT request to update post ${postId}...`);

  // Make PUT request to JSONPlaceholder API
  fetch(`https://jsonplaceholder.typicode.com/posts/${postId}`, {
    method: 'PUT',
    headers: {
      'Content-Type': 'application/json'
    },
    body: JSON.stringify({
      id: parseInt(postId),
      title: title,
      body: body,
      userId: 1
    })
  })
    .then(response => {
      if (!response.ok) {
        throw new Error(`Server returned ${response.status}`);
      }
      return response.json();
    })
    .then(data => {
      console.log('📦 Response from JSONPlaceholder API:', data);
      displayUpdatedPost(data, postId);
    })
    .catch(error => {
      displayMessage(`Failed to update post. ${error.message}`, 'error');
      console.error('❌ Error:', error);
    });
});

// Initialize with example data
window.addEventListener('load', () => {
  console.log('💻 Update Post (PUT Request) application loaded');
  console.log('📝 This app demonstrates making PUT requests to update resources');
  console.log('🌐 Using JSONPlaceholder API for demo purposes');
  
  // Fetch and display available posts
  fetchAndDisplayPosts();
});
