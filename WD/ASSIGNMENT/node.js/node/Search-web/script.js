const userIdInput = document.getElementById('userIdInput');
const searchButton = document.getElementById('searchButton');
const resultsContainer = document.getElementById('results');

async function loadPosts() {
  const userId = userIdInput.value.trim();
  if (!userId || Number(userId) < 1) {
    resultsContainer.innerHTML = '<p class="error">Please enter a valid user ID (1 or greater).</p>';
    return;
  }

  resultsContainer.innerHTML = '<p class="loading">Loading posts...</p>';

  try {
    const response = await fetch(`/api/posts?userId=${encodeURIComponent(userId)}`);
    if (!response.ok) {
      throw new Error(`Server returned ${response.status}`);
    }
    const posts = await response.json();

    if (!Array.isArray(posts) || posts.length === 0) {
      resultsContainer.innerHTML = `<p class="empty">No posts found for user ID ${userId}.</p>`;
      return;
    }

    resultsContainer.innerHTML = posts
      .map(post => `
        <article class="post-card">
          <h2>${post.title}</h2>
          <p>${post.body}</p>
          <div class="meta">Post ID: ${post.id} • User ID: ${post.userId}</div>
        </article>
      `)
      .join('');
  } catch (error) {
    resultsContainer.innerHTML = `<p class="error">Failed to load posts. ${error.message}</p>`;
  }
}

searchButton.addEventListener('click', loadPosts);
userIdInput.addEventListener('keypress', event => {
  if (event.key === 'Enter') {
    loadPosts();
  }
});
