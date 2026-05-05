const deleteForm = document.getElementById('deleteForm');
const responseContainer = document.getElementById('response');
const postsList = document.getElementById('postsList');

let currentPosts = [];

function displayPostsList(posts) {
  currentPosts = posts;
  postsList.innerHTML = '';
  const fragment = document.createDocumentFragment();

  posts.forEach(post => {
    const card = document.createElement('div');
    card.className = 'post-card-item';
    card.innerHTML = `
      <div class="post-item-header">
        <span class="post-item-id">#${post.id}</span>
        <span class="post-item-user">User ${post.userId}</span>
        <button class="delete-btn" data-post-id="${post.id}" title="Delete this post">🗑️</button>
      </div>
      <h3>${post.title}</h3>
      <p>${post.body.substring(0, 80)}...</p>
    `;
    fragment.appendChild(card);
  });

  postsList.appendChild(fragment);

  // Add event listeners to delete buttons
  document.querySelectorAll('.delete-btn').forEach(btn => {
    btn.addEventListener('click', (e) => {
      e.stopPropagation();
      const postId = parseInt(btn.dataset.postId);
      selectPostForDeletion(postId);
    });
  });

  console.log(`✅ Loaded ${posts.length} posts from JSONPlaceholder`);
}

function selectPostForDeletion(postId) {
  document.getElementById('postId').value = postId;
  console.log(`📍 Selected post #${postId} for deletion`);

  // Scroll to form
  deleteForm.scrollIntoView({ behavior: 'smooth' });
}

function displayMessage(message, className = 'info') {
  responseContainer.innerHTML = `<div class="status-message ${className}">${message}</div>`;
}

function displayRemainingPosts(deletedPostId) {
  const remainingPosts = currentPosts.filter(post => post.id !== deletedPostId);

  responseContainer.innerHTML = `
    <div class="deletion-result">
      <div class="status-message success">✅ Post #${deletedPostId} deleted successfully!</div>
      <h3>Remaining Posts (${remainingPosts.length})</h3>
      <div class="remaining-posts">
        ${remainingPosts.slice(0, 3).map(post => `
          <div class="remaining-post-item">
            <div class="post-item-header">
              <span class="post-item-id">#${post.id}</span>
              <span class="post-item-user">User ${post.userId}</span>
            </div>
            <h4>${post.title}</h4>
            <p>${post.body.substring(0, 60)}...</p>
          </div>
        `).join('')}
        ${remainingPosts.length > 3 ? `<p class="more-posts">...and ${remainingPosts.length - 3} more posts</p>` : ''}
      </div>
    </div>
  `;

  // Update the posts list to show remaining posts
  displayPostsList(remainingPosts);
}

deleteForm.addEventListener('submit', event => {
  event.preventDefault();

  const formData = new FormData(deleteForm);
  const postId = parseInt(formData.get('postId').trim());

  if (!postId || postId < 1 || postId > 100) {
    displayMessage('Please enter a valid post ID between 1 and 100.', 'error');
    return;
  }

  displayMessage('Deleting post...', 'loading');
  console.log(`🗑️ Sending DELETE request to remove post ${postId}...`);

  // Make DELETE request to JSONPlaceholder API
  fetch(`https://jsonplaceholder.typicode.com/posts/${postId}`, {
    method: 'DELETE'
  })
    .then(response => {
      if (!response.ok) {
        throw new Error(`Server returned ${response.status}`);
      }
      console.log(`✅ DELETE request successful for post ${postId}`);
      console.log('📦 Response from JSONPlaceholder API:', response);
      return response;
    })
    .then(() => {
      console.log(`🎉 Post #${postId} has been successfully deleted!`);
      displayRemainingPosts(postId);
    })
    .catch(error => {
      displayMessage(`Failed to delete post. ${error.message}`, 'error');
      console.error('❌ Error:', error);
    });
});

function fetchAndDisplayPosts() {
  console.log('📥 Fetching posts from JSONPlaceholder...');

  fetch('https://jsonplaceholder.typicode.com/posts?_limit=10')
    .then(response => response.json())
    .then(data => {
      displayPostsList(data);
    })
    .catch(error => {
      console.error('Failed to fetch posts:', error);
      postsList.innerHTML = '<p class="error-hint">Failed to load posts. You can manually enter a post ID.</p>';
    });
}

// Initialize with example data
window.addEventListener('load', () => {
  console.log('💻 Delete Post (DELETE Request) application loaded');
  console.log('📝 This app demonstrates making DELETE requests to remove resources');
  console.log('🌐 Using JSONPlaceholder API for demo purposes');

  // Fetch and display available posts
  fetchAndDisplayPosts();
});