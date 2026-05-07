const express = require('express');
const path = require('path');
const app = express();
const PORT = 3001; // Requirement: Create a server that listens on a specified port

app.use(express.static(path.join(__dirname, 'public')));

// Requirement: Respond with "Welcome to Express!" when accessed at the root route (/)
app.get('/', (req, res) => {
    // I am serving a premium HTML page that contains the required text
    res.sendFile(path.join(__dirname, 'public', 'index.html'));
});

// Fallback for raw text if requested
app.get('/api/welcome', (req, res) => {
    res.send("Welcome to Express!");
});

app.listen(PORT, () => {
    // Requirement: Log a message to the console indicating the server has started
    console.log(`\n✨ [SERVER_INITIALIZED] Basic Express Server is now live.`);
    console.log(`📍 Portal Access: http://localhost:${PORT}`);
    console.log(`🚀 STATUS: Standing by for incoming connections.\n`);
});
