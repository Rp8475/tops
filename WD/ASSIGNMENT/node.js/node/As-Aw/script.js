// Custom console logger to display logs on the page
const consoleLogs = document.getElementById('consoleLogs');
const originalLog = console.log;
const originalError = console.error;
const originalWarn = console.warn;

function addToConsoleOutput(message, type = 'log') {
  const logEntry = document.createElement('div');
  logEntry.className = `console-entry ${type}`;
  logEntry.textContent = `[${new Date().toLocaleTimeString()}] ${message}`;
  consoleLogs.appendChild(logEntry);
  consoleLogs.scrollTop = consoleLogs.scrollHeight;
}

console.log = function(...args) {
  originalLog.apply(console, args);
  addToConsoleOutput(args.join(' '), 'log');
};

console.error = function(...args) {
  originalError.apply(console, args);
  addToConsoleOutput(args.join(' '), 'error');
};

console.warn = function(...args) {
  originalWarn.apply(console, args);
  addToConsoleOutput(args.join(' '), 'warn');
};

// Async/Await functions for fetching user data
async function fetchUsers() {
  try {
    console.log('🚀 Starting to fetch users from JSONPlaceholder...');

    const response = await fetch('https://jsonplaceholder.typicode.com/users');

    if (!response.ok) {
      throw new Error(`HTTP error! status: ${response.status}`);
    }

    const users = await response.json();

    console.log('✅ Successfully fetched users!');
    console.log('📊 Total users received:', users.length);
    console.log('👥 User data:', users);

    return users;
  } catch (error) {
    console.error('❌ Error fetching users:', error.message);
    throw error;
  }
}

async function fetchSingleUser(userId = 1) {
  try {
    console.log(`🚀 Starting to fetch user #${userId} from JSONPlaceholder...`);

    const response = await fetch(`https://jsonplaceholder.typicode.com/users/${userId}`);

    if (!response.ok) {
      throw new Error(`HTTP error! status: ${response.status}`);
    }

    const user = await response.json();

    console.log(`✅ Successfully fetched user #${userId}!`);
    console.log('👤 User data:', user);

    return user;
  } catch (error) {
    console.error(`❌ Error fetching user #${userId}:`, error.message);
    throw error;
  }
}

async function fetchUserPosts(userId) {
  try {
    console.log(`🚀 Starting to fetch posts for user #${userId}...`);

    const response = await fetch(`https://jsonplaceholder.typicode.com/posts?userId=${userId}`);

    if (!response.ok) {
      throw new Error(`HTTP error! status: ${response.status}`);
    }

    const posts = await response.json();

    console.log(`✅ Successfully fetched ${posts.length} posts for user #${userId}!`);
    console.log('📝 Posts data:', posts);

    return posts;
  } catch (error) {
    console.error(`❌ Error fetching posts for user #${userId}:`, error.message);
    throw error;
  }
}

// UI functions
function displayMessage(message, className = 'info') {
  responseContainer.innerHTML = `<div class="status-message ${className}">${message}</div>`;
}

function displayUsers(users) {
  const usersHtml = `
    <div class="users-result">
      <h3>Users Data (${users.length} users)</h3>
      <div class="users-grid">
        ${users.map(user => `
          <div class="user-card" data-user-id="${user.id}">
            <div class="user-header">
              <span class="user-id">#${user.id}</span>
              <span class="user-name">${user.name}</span>
            </div>
            <div class="user-details">
              <p><strong>Username:</strong> ${user.username}</p>
              <p><strong>Email:</strong> ${user.email}</p>
              <p><strong>Phone:</strong> ${user.phone}</p>
              <p><strong>Website:</strong> ${user.website}</p>
              <div class="user-address">
                <strong>Address:</strong><br>
                ${user.address.street}, ${user.address.city}<br>
                ${user.address.zipcode}
              </div>
              <div class="user-company">
                <strong>Company:</strong> ${user.company.name}
              </div>
            </div>
          </div>
        `).join('')}
      </div>
    </div>
  `;

  responseContainer.innerHTML = usersHtml;

  // Add click handlers for user cards
  document.querySelectorAll('.user-card').forEach(card => {
    card.addEventListener('click', async () => {
      const userId = parseInt(card.dataset.userId);
      try {
        const posts = await fetchUserPosts(userId);
        displayUserPosts(userId, posts);
      } catch (error) {
        displayMessage(`Failed to fetch posts for user #${userId}`, 'error');
      }
    });
  });
}

function displaySingleUser(user) {
  const userHtml = `
    <div class="user-result">
      <h3>Single User Data</h3>
      <div class="user-card detailed">
        <div class="user-header">
          <span class="user-id">#${user.id}</span>
          <span class="user-name">${user.name}</span>
        </div>
        <div class="user-details">
          <p><strong>Username:</strong> ${user.username}</p>
          <p><strong>Email:</strong> ${user.email}</p>
          <p><strong>Phone:</strong> ${user.phone}</p>
          <p><strong>Website:</strong> <a href="http://${user.website}" target="_blank">${user.website}</a></p>
          <div class="user-address">
            <strong>Address:</strong><br>
            ${user.address.street}, ${user.address.suite}<br>
            ${user.address.city}, ${user.address.zipcode}<br>
            <em>Geo: ${user.address.geo.lat}, ${user.address.geo.lng}</em>
          </div>
          <div class="user-company">
            <strong>Company:</strong> ${user.company.name}<br>
            <em>${user.company.catchPhrase}</em><br>
            <small>${user.company.bs}</small>
          </div>
        </div>
      </div>
    </div>
  `;

  responseContainer.innerHTML = userHtml;
}

function displayUserPosts(userId, posts) {
  const postsHtml = `
    <div class="posts-result">
      <h3>Posts by User #${userId} (${posts.length} posts)</h3>
      <div class="posts-list">
        ${posts.map(post => `
          <div class="post-item">
            <div class="post-header">
              <span class="post-id">Post #${post.id}</span>
              <span class="post-title">${post.title}</span>
            </div>
            <p class="post-body">${post.body}</p>
          </div>
        `).join('')}
      </div>
    </div>
  `;

  responseContainer.innerHTML += postsHtml;
}

function clearResults() {
  responseContainer.innerHTML = '<p class="hint">Click "Fetch Users" to get user data using async/await.</p>';
  consoleLogs.innerHTML = '<p class="console-hint">Console logs will appear here...</p>';
}

// Event listeners
document.getElementById('fetchUsersBtn').addEventListener('click', async () => {
  try {
    displayMessage('Fetching users...', 'loading');
    const users = await fetchUsers();
    displayUsers(users);
  } catch (error) {
    displayMessage('Failed to fetch users. Check console for details.', 'error');
  }
});

document.getElementById('fetchSingleUserBtn').addEventListener('click', async () => {
  const userIdInput = document.getElementById('userIdInput');
  const userId = parseInt(userIdInput.value);
  
  if (!userId || userId < 1 || userId > 10) {
    displayMessage('Please enter a valid User ID between 1 and 10.', 'error');
    userIdInput.focus();
    return;
  }
  
  try {
    displayMessage(`Fetching user #${userId}...`, 'loading');
    const user = await fetchSingleUser(userId);
    displaySingleUser(user);
  } catch (error) {
    displayMessage('Failed to fetch user. Check console for details.', 'error');
  }
});

document.getElementById('clearBtn').addEventListener('click', clearResults);

// Initialize
const responseContainer = document.getElementById('response');

window.addEventListener('load', () => {
  console.log('💻 Async/Await Demo application loaded');
  console.log('📝 This app demonstrates async/await with JSONPlaceholder API');
  console.log('🌐 Features: Fetch users, single user, and user posts');
  console.log('🔧 All operations use async/await with proper error handling');
});