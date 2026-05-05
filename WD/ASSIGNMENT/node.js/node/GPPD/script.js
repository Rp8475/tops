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

// API Client Object - Complete CRUD operations
const apiClient = {
  baseURL: 'https://jsonplaceholder.typicode.com',

  // GET - Retrieve data
  async get(endpoint) {
    try {
      console.log(`🔍 GET ${this.baseURL}${endpoint}`);

      const response = await fetch(`${this.baseURL}${endpoint}`);

      if (!response.ok) {
        throw new Error(`HTTP ${response.status}: ${response.statusText}`);
      }

      const data = await response.json();
      console.log(`✅ GET successful - Received ${Array.isArray(data) ? data.length + ' items' : '1 item'}`);
      console.log('📦 Response data:', data);

      return {
        success: true,
        data: data,
        status: response.status
      };
    } catch (error) {
      console.error(`❌ GET failed: ${error.message}`);
      return {
        success: false,
        error: error.message,
        status: null
      };
    }
  },

  // POST - Create new data
  async post(endpoint, data) {
    try {
      console.log(`📝 POST ${this.baseURL}${endpoint}`);
      console.log('📤 Request payload:', data);

      const response = await fetch(`${this.baseURL}${endpoint}`, {
        method: 'POST',
        headers: {
          'Content-Type': 'application/json'
        },
        body: JSON.stringify(data)
      });

      if (!response.ok) {
        throw new Error(`HTTP ${response.status}: ${response.statusText}`);
      }

      const responseData = await response.json();
      console.log(`✅ POST successful - Created resource with ID: ${responseData.id}`);
      console.log('📦 Response data:', responseData);

      return {
        success: true,
        data: responseData,
        status: response.status
      };
    } catch (error) {
      console.error(`❌ POST failed: ${error.message}`);
      return {
        success: false,
        error: error.message,
        status: null
      };
    }
  },

  // PUT - Update existing data
  async put(endpoint, data) {
    try {
      console.log(`🔄 PUT ${this.baseURL}${endpoint}`);
      console.log('📤 Request payload:', data);

      const response = await fetch(`${this.baseURL}${endpoint}`, {
        method: 'PUT',
        headers: {
          'Content-Type': 'application/json'
        },
        body: JSON.stringify(data)
      });

      if (!response.ok) {
        throw new Error(`HTTP ${response.status}: ${response.statusText}`);
      }

      const responseData = await response.json();
      console.log(`✅ PUT successful - Updated resource`);
      console.log('📦 Response data:', responseData);

      return {
        success: true,
        data: responseData,
        status: response.status
      };
    } catch (error) {
      console.error(`❌ PUT failed: ${error.message}`);
      return {
        success: false,
        error: error.message,
        status: null
      };
    }
  },

  // DELETE - Remove data
  async delete(endpoint) {
    try {
      console.log(`🗑️ DELETE ${this.baseURL}${endpoint}`);

      const response = await fetch(`${this.baseURL}${endpoint}`, {
        method: 'DELETE'
      });

      if (!response.ok) {
        throw new Error(`HTTP ${response.status}: ${response.statusText}`);
      }

      console.log(`✅ DELETE successful - Resource removed`);
      console.log('📦 Response status:', response.status);

      return {
        success: true,
        status: response.status
      };
    } catch (error) {
      console.error(`❌ DELETE failed: ${error.message}`);
      return {
        success: false,
        error: error.message,
        status: null
      };
    }
  }
};

// UI functions
function displayMessage(message, className = 'info') {
  responseContainer.innerHTML = `<div class="status-message ${className}">${message}</div>`;
}

function displayData(result, method, endpoint) {
  if (!result.success) {
    responseContainer.innerHTML = `
      <div class="error-result">
        <h3>❌ ${method} Request Failed</h3>
        <p><strong>Endpoint:</strong> ${endpoint}</p>
        <p><strong>Error:</strong> ${result.error}</p>
      </div>
    `;
    return;
  }

  const methodColors = {
    GET: '#4facfe',
    POST: '#43e97b',
    PUT: '#f093fb',
    DELETE: '#ff6b6b'
  };

  const methodIcons = {
    GET: '🔍',
    POST: '📝',
    PUT: '🔄',
    DELETE: '🗑️'
  };

  let content = '';

  if (method === 'DELETE') {
    content = `
      <div class="delete-result">
        <div class="card-header">
          <div>
            <h3 class="card-title">${methodIcons[method]} ${method} Successful</h3>
            <p class="field-value">Endpoint: ${endpoint}</p>
          </div>
          <span class="card-badge" style="background: ${methodColors[method]}; color: #111">${method}</span>
        </div>
        <div class="field-row">
          <p class="field-value"><strong>Status:</strong> ${result.status}</p>
          <p class="field-value success-note">✅ Resource successfully deleted from the server</p>
        </div>
      </div>
    `;
  } else {
    const data = result.data;
    const isArray = Array.isArray(data);
    const itemCount = isArray ? data.length : 1;
    const previewItems = isArray ? data.slice(0, 6) : [data];

    const renderCardFields = (item) => {
      const entries = Object.entries(item).slice(0, 5);
      const body = entries.map(([key, value]) => `
        <div class="field-row">
          <div class="field-label">${key}</div>
          <div class="field-value">${typeof value === 'object' ? JSON.stringify(value, null, 2) : value}</div>
        </div>
      `).join('');

      return `
        <div class="data-card">
          <div class="card-title">${item.title ?? item.name ?? 'Record #' + item.id}</div>
          ${body}
        </div>
      `;
    };

    content = `
      <div class="response-card">
        <div class="card-header">
          <div>
            <h3 class="card-title">${methodIcons[method]} ${method} Request Successful</h3>
            <p class="field-value">Endpoint: ${endpoint}</p>
          </div>
          <span class="card-badge" style="background: ${methodColors[method]}; color: #111">${method}</span>
        </div>
        <div class="field-row">
          <p class="field-value"><strong>Status:</strong> ${result.status}</p>
          <p class="field-value"><strong>Items:</strong> ${itemCount}</p>
        </div>
        <div class="cards-grid">
          ${previewItems.map(renderCardFields).join('')}
        </div>
        ${isArray && data.length > previewItems.length ? `
          <p class="hint">Showing ${previewItems.length} of ${data.length} items; use a narrower query for a full result set.</p>
        ` : ''}
      </div>
    `;
  }

  responseContainer.innerHTML = content;
}

// Test functions for each HTTP method
async function testGetPosts() {
  displayMessage('Fetching posts...', 'loading');
  const result = await apiClient.get('/posts?_limit=5');
  displayData(result, 'GET', '/posts?_limit=5');
}

async function testGetUsers() {
  displayMessage('Fetching users...', 'loading');
  const result = await apiClient.get('/users');
  displayData(result, 'GET', '/users');
}

async function testGetSinglePost() {
  displayMessage('Fetching single post...', 'loading');
  const result = await apiClient.get('/posts/1');
  displayData(result, 'GET', '/posts/1');
}

function getCreatePostPayload() {
  const title = document.getElementById('postTitleInput').value.trim();
  const body = document.getElementById('postBodyInput').value.trim();
  const userIdValue = document.getElementById('postUserIdInput').value;
  const userId = Number(userIdValue);

  if (!title || !body) {
    displayMessage('Please enter both a title and body for the new post.', 'error');
    return null;
  }

  if (!userId || userId <= 0) {
    displayMessage('Please enter a valid User ID greater than 0.', 'error');
    return null;
  }

  return {
    title,
    body,
    userId
  };
}

function getUpdatePostPayload() {
  const postIdValue = document.getElementById('updatePostIdInput').value;
  const title = document.getElementById('updatePostTitleInput').value.trim();
  const body = document.getElementById('updatePostBodyInput').value.trim();
  const userIdValue = document.getElementById('updatePostUserIdInput').value;
  const id = Number(postIdValue);
  const userId = Number(userIdValue);

  if (!id || id <= 0) {
    displayMessage('Please enter a valid post ID to update.', 'error');
    return null;
  }

  if (!title || !body) {
    displayMessage('Please enter both an updated title and body.', 'error');
    return null;
  }

  if (!userId || userId <= 0) {
    displayMessage('Please enter a valid User ID greater than 0.', 'error');
    return null;
  }

  return {
    id,
    title,
    body,
    userId
  };
}

function getDeletePostId() {
  const postIdValue = document.getElementById('deletePostIdInput').value;
  const id = Number(postIdValue);

  if (!id || id <= 0) {
    displayMessage('Please enter a valid post ID to delete.', 'error');
    return null;
  }

  return id;
}

async function testCreatePost() {
  const newPost = getCreatePostPayload();
  if (!newPost) {
    return;
  }

  displayMessage('Creating new post...', 'loading');
  const result = await apiClient.post('/posts', newPost);
  displayData(result, 'POST', '/posts');
}

async function testUpdatePost() {
  const updatedPost = getUpdatePostPayload();
  if (!updatedPost) {
    return;
  }

  displayMessage('Updating post...', 'loading');
  const result = await apiClient.put(`/posts/${updatedPost.id}`, updatedPost);
  displayData(result, 'PUT', `/posts/${updatedPost.id}`);
}

async function testDeletePost() {
  const postId = getDeletePostId();
  if (!postId) {
    return;
  }

  displayMessage('Deleting post...', 'loading');
  const result = await apiClient.delete(`/posts/${postId}`);
  displayData(result, 'DELETE', `/posts/${postId}`);
}

// Event listeners
document.getElementById('getPostsBtn').addEventListener('click', testGetPosts);
document.getElementById('getUsersBtn').addEventListener('click', testGetUsers);
document.getElementById('getSinglePostBtn').addEventListener('click', testGetSinglePost);
document.getElementById('createPostBtn').addEventListener('click', testCreatePost);
document.getElementById('updatePostBtn').addEventListener('click', testUpdatePost);
document.getElementById('deletePostBtn').addEventListener('click', testDeletePost);

// Initialize
const responseContainer = document.getElementById('response');

window.addEventListener('load', () => {
  console.log('💻 HTTP Methods API Client Demo loaded');
  console.log('📝 Features: Complete CRUD operations (GET, POST, PUT, DELETE)');
  console.log('🌐 Using JSONPlaceholder API with custom Fetch-based client');
  console.log('🔧 API Client methods: apiClient.get(), apiClient.post(), apiClient.put(), apiClient.delete()');
});