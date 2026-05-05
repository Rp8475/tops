const userIdInput = document.getElementById('userIdInput');
const searchButton = document.getElementById('searchButton');
const resultsContainer = document.getElementById('results');
const errorPopup = document.getElementById('errorPopup');
const popupMessage = document.getElementById('popupMessage');
const closePopupButton = document.getElementById('closePopup');

function showMessage(message, className = 'info') {
  resultsContainer.innerHTML = `<p class="${className}">${message}</p>`;
}

function showErrorPopup(message) {
  popupMessage.textContent = message;
  errorPopup.classList.remove('hidden');
}

function hideErrorPopup() {
  errorPopup.classList.add('hidden');
}

function fetchJson(url) {
  return fetch(url).then(response => {
    if (!response.ok) {
      throw new Error(`Server error: ${response.status}`);
    }
    return response.json();
  });
}

function renderPosts(posts) {
  resultsContainer.innerHTML = posts
    .map(post => `
      <article class="post-card">
        <h2>${post.title}</h2>
        <p>${post.body}</p>
        <div class="meta">Post ID: ${post.id} • User ID: ${post.userId}</div>
      </article>
    `)
    .join('');
}

async function loadPosts() {
  const userId = userIdInput.value.trim();

  if (!userId || Number(userId) < 1) {
    showMessage('Please enter a valid user ID (1 or greater).', 'error');
    return;
  }

  showMessage('Loading posts...', 'loading');

  fetchJson(`/api/posts?userId=${encodeURIComponent(userId)}`)
    .catch(error => {
      console.warn('Primary API failed, loading local dummy data:', error);
      showMessage('Primary API failed. Loading local dummy data...', 'loading');
      return fetchJson(`/api/posts-local?userId=${encodeURIComponent(userId)}`);
    })
    .then(posts => {
      if (!Array.isArray(posts) || posts.length === 0) {
        showMessage(`No posts found for user ID ${userId}.`, 'empty');
        return;
      }

      renderPosts(posts);
    })
    .catch(error => {
      const message = 'Failed to load posts from both remote and local data sources. Please try again.';
      showMessage(message, 'error');
      showErrorPopup(message);
      console.error('Fetch error:', error);
    });
}

closePopupButton.addEventListener('click', hideErrorPopup);
errorPopup.addEventListener('click', event => {
  if (event.target === errorPopup) {
    hideErrorPopup();
  }
});

searchButton.addEventListener('click', loadPosts);
userIdInput.addEventListener('keypress', event => {
  if (event.key === 'Enter') {
    loadPosts();
  }
});
