const express = require('express');
const path = require('path');
const app = express();
const PORT = 3002;

// Requirement: Log the requested route in the console
app.use((req, res, next) => {
    console.log(`📡 [ROUTE_INTERCEPT] Time: ${new Date().toLocaleTimeString()} | Requested Path: ${req.url}`);
    next();
});

app.use(express.static(path.join(__dirname, 'public')));

// Requirement: Create routes for / - respond with "Home Page"
app.get('/', (req, res) => {
    res.sendFile(path.join(__dirname, 'public', 'index.html'));
});

// Requirement: Create routes for /about - respond with "About Page"
app.get('/about', (req, res) => {
    res.sendFile(path.join(__dirname, 'public', 'about.html'));
});

// Requirement: Create routes for /contact - respond with "Contact Page"
app.get('/contact', (req, res) => {
    res.sendFile(path.join(__dirname, 'public', 'contact.html'));
});

// API endpoints for raw text if needed
app.get('/api/text/home', (req, res) => res.send("Home Page"));
app.get('/api/text/about', (req, res) => res.send("About Page"));
app.get('/api/text/contact', (req, res) => res.send("Contact Page"));

app.listen(PORT, () => {
    console.log(`\n🚦 Task 3 Multi-Path Routing active at http://localhost:${PORT}`);
    console.log(`Endpoints registered: /, /about, /contact\n`);
});
