const postForm = document.getElementById('postForm');
const responseContainer = document.getElementById('response');
const nextIdStorageKey = 'createDataNextPostId';
const nextUserIdStorageKey = 'createDataNextUserId';

function getNextPostId() {
  const storedValue = localStorage.getItem(nextIdStorageKey);
  const nextId = storedValue ? Number(storedValue) : 1;
  localStorage.setItem(nextIdStorageKey, String(nextId + 1));
  return nextId;
}

function getNextUserId() {
  const storedValue = localStorage.getItem(nextUserIdStorageKey);
  const nextId = storedValue ? Number(storedValue) : 1;
  localStorage.setItem(nextUserIdStorageKey, String(nextId + 1));
  return nextId;
}

function displayMessage(message, className = 'info') {
  responseContainer.innerHTML = `<div class="status-message ${className}">${message}</div>`;
}

function displayPostCard(post) {
  responseContainer.innerHTML = `
    <article class="post-result-card">
      <div class="post-card-header">
        <span class="post-label">Created Post</span>
        <span class="post-id">#${post.id}</span>
      </div>
      <h2>${post.title}</h2>
      <p>${post.body}</p>
      <div class="post-meta">
        User ID: ${post.userId}
      </div>
    </article>
  `;
}

postForm.addEventListener('submit', event => {
  event.preventDefault();

  const formData = new FormData(postForm);
  const generatedId = getNextPostId();
  const generatedUserId = getNextUserId();
  const postData = {
    id: generatedId,
    userId: generatedUserId,
    title: formData.get('title').trim(),
    body: formData.get('body').trim()
  };

  if (!postData.title || !postData.body) {
    displayMessage('Title and body are required.', 'error');
    return;
  }

  displayMessage('Creating post...', 'loading');

  fetch('/api/create-post', {
    method: 'POST',
    headers: {
      'Content-Type': 'application/json'
    },
    body: JSON.stringify(postData)
  })
    .then(response => {
      if (!response.ok) {
        throw new Error(`Server returned ${response.status}`);
      }
      return response.json();
    })
    .then(data => {
      displayPostCard({ ...data, id: generatedId, userId: generatedUserId });
    })
    .catch(error => {
      displayMessage(`Failed to create post. ${error.message}`, 'error');
      console.error(error);
    });
});
