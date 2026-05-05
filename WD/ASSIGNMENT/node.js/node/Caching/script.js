// Cache configuration
const CACHE_KEY = 'jsonplaceholder_posts_cache';
const CACHE_DURATION = 5 * 60 * 1000; // 5 minutes in milliseconds

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

// Cache management functions
function getCache() {
  try {
    const cached = localStorage.getItem(CACHE_KEY);
    if (!cached) return null;

    const cacheData = JSON.parse(cached);
    const now = Date.now();

    // Check if cache is expired
    if (now - cacheData.timestamp > CACHE_DURATION) {
      console.log('⚠️ Cache expired, will fetch fresh data');
      localStorage.removeItem(CACHE_KEY);
      return null;
    }

    console.log('✅ Cache hit! Using cached data');
    return cacheData;
  } catch (error) {
    console.error('❌ Error reading cache:', error);
    return null;
  }
}

function setCache(data) {
  try {
    const cacheData = {
      data: data,
      timestamp: Date.now(),
      expiresAt: Date.now() + CACHE_DURATION
    };
    localStorage.setItem(CACHE_KEY, JSON.stringify(cacheData));
    console.log('💾 Data cached successfully');
    updateCacheStatus(cacheData);
  } catch (error) {
    console.error('❌ Error caching data:', error);
  }
}

function clearCache() {
  localStorage.removeItem(CACHE_KEY);
  console.log('🗑️ Cache cleared');
  updateCacheStatus(null);
}

function updateCacheStatus(cacheData) {
  const cacheState = document.getElementById('cacheState');
  const lastUpdated = document.getElementById('lastUpdated');
  const postsCount = document.getElementById('postsCount');

  if (cacheData) {
    cacheState.textContent = 'Cached';
    cacheState.className = 'status-value cached';
    lastUpdated.textContent = new Date(cacheData.timestamp).toLocaleString();
    postsCount.textContent = cacheData.data.length;
  } else {
    cacheState.textContent = 'Empty';
    cacheState.className = 'status-value empty';
    lastUpdated.textContent = 'Never';
    postsCount.textContent = '0';
  }
}

// Async/Await functions for fetching posts with caching
async function fetchPosts(forceRefresh = false) {
  console.log('🚀 Starting to fetch posts...');

  // Check cache first (unless force refresh)
  if (!forceRefresh) {
    const cached = getCache();
    if (cached) {
      console.log('🎯 Returning cached posts to avoid network request');
      updateCacheStatus(cached);
      return cached.data;
    }
  } else {
    console.log('🔄 Force refresh requested, bypassing cache');
  }

  try {
    console.log('🌐 Making network request to JSONPlaceholder...');

    const response = await fetch('https://jsonplaceholder.typicode.com/posts');

    if (!response.ok) {
      throw new Error(`HTTP error! status: ${response.status}`);
    }

    const posts = await response.json();

    console.log('✅ Successfully fetched posts from API!');
    console.log('📊 Posts received:', posts.length);

    // Cache the data
    setCache(posts);

    return posts;
  } catch (error) {
    console.error('❌ Error fetching posts:', error.message);
    throw error;
  }
}

// UI functions
function displayMessage(message, className = 'info') {
  responseContainer.innerHTML = `<div class="status-message ${className}">${message}</div>`;
}

function displayPosts(posts, source = 'api') {
  const sourceBadge = source === 'cache' ? '<span class="source-badge cache">📦 FROM CACHE</span>' : '<span class="source-badge api">🌐 FROM API</span>';

  const postsHtml = `
    <div class="posts-result">
      <div class="posts-header">
        <h3>Posts Data (${posts.length} posts)</h3>
        ${sourceBadge}
      </div>
      <div class="posts-grid">
        ${posts.slice(0, 6).map(post => `
          <div class="post-card">
            <div class="post-header">
              <span class="post-id">#${post.id}</span>
              <span class="post-user">User ${post.userId}</span>
            </div>
            <h4>${post.title}</h4>
            <p>${post.body.substring(0, 100)}...</p>
          </div>
        `).join('')}
      </div>
      ${posts.length > 6 ? `<p class="more-posts">...and ${posts.length - 6} more posts</p>` : ''}
    </div>
  `;

  responseContainer.innerHTML = postsHtml;
}

// Event listeners
document.getElementById('fetchPostsBtn').addEventListener('click', async () => {
  try {
    displayMessage('Fetching posts (checking cache first)...', 'loading');
    const posts = await fetchPosts();
    displayPosts(posts, 'api'); // Will be overridden if from cache
  } catch (error) {
    displayMessage('Failed to fetch posts. Check console for details.', 'error');
  }
});

document.getElementById('clearCacheBtn').addEventListener('click', () => {
  clearCache();
  displayMessage('Cache cleared successfully!', 'success');
  responseContainer.innerHTML = '<p class="hint">Cache cleared. Click "Fetch Posts" to load fresh data from the API.</p>';
});

document.getElementById('forceRefreshBtn').addEventListener('click', async () => {
  try {
    displayMessage('Force refreshing posts (bypassing cache)...', 'loading');
    const posts = await fetchPosts(true);
    displayPosts(posts, 'api');
  } catch (error) {
    displayMessage('Failed to fetch posts. Check console for details.', 'error');
  }
});

// Initialize
const responseContainer = document.getElementById('response');

// Check cache on page load
window.addEventListener('load', () => {
  console.log('💻 Caching Demo application loaded');
  console.log('📝 Features: Intelligent caching, cache status, force refresh');
  console.log('🌐 Using JSONPlaceholder API with localStorage caching');

  // Check if we have cached data on load
  const cached = getCache();
  if (cached) {
    console.log('📦 Found cached data on page load');
    updateCacheStatus(cached);
    displayPosts(cached.data, 'cache');
  } else {
    console.log('📭 No cached data found');
    updateCacheStatus(null);
  }
});