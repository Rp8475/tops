/**
 * app.js - Main Server File
 * This file sets up the Express server, Handlebars template engine,
 * and defines the routes for our blogging platform.
 */

const express = require('express');
const { engine } = require('express-handlebars');
const path = require('path');

const app = express();
const PORT = process.env.PORT || 3000;

// --- DUMMY DATA ---
// This data simulates a database for a student project.
const blogPosts = [
    {
        id: 1,
        title: "The Future of Web Development",
        description: "Explore the latest trends in web development, from AI-driven coding to the rise of serverless architectures.",
        author: "John Doe",
        date: "May 5, 2026",
        image: "https://images.unsplash.com/photo-1498050108023-c5249f4df085?auto=format&fit=crop&w=800&q=80"
    },
    {
        id: 2,
        title: "Mastering Node.js for Beginners",
        description: "A comprehensive guide for students starting their journey with Node.js and Express.",
        author: "Jane Smith",
        date: "May 4, 2026",
        image: "https://images.unsplash.com/photo-1504639725590-34d0984388bd?auto=format&fit=crop&w=800&q=80"
    },
    {
        id: 3,
        title: "Designing Classy UIs with CSS",
        description: "Learn how to create professional and elegant web designs using simple CSS techniques.",
        author: "Alice Johnson",
        date: "May 3, 2026",
        image: "https://images.unsplash.com/photo-1586717791821-3f44a563eb4c?auto=format&fit=crop&w=800&q=80"
    },
    {
        id: 4,
        title: "The Importance of Clean Code",
        description: "Why writing readable and maintainable code is crucial for every developer.",
        author: "Bob Wilson",
        date: "May 2, 2026",
        image: "https://images.unsplash.com/photo-1516116216624-53e697fedbea?auto=format&fit=crop&w=800&q=80"
    }
];

const teamMembers = [
    { name: "Udit Rana", role: "Founder & Lead Dev", bio: "Passionate about building scalable web applications and teaching Node.js." },
    { name: "Sarah Connor", role: "UI/UX Designer", bio: "Creative mind behind our classy and professional designs." },
    { name: "David Miller", role: "Content Manager", bio: "Ensures our blog posts are engaging and high-quality." }
];

// --- HANDLEBARS SETUP ---
// Configure Handlebars as the template engine
app.engine('hbs', engine({
    extname: '.hbs',
    defaultLayout: 'main',
    layoutsDir: path.join(__dirname, 'views/layouts'),
    partialsDir: path.join(__dirname, 'views/partials'),
    helpers: {
        // Custom helper to check for equality (used for active link highlighting)
        eq: (a, b) => a === b
    }
}));
app.set('view engine', 'hbs');
app.set('views', path.join(__dirname, 'views'));

// --- STATIC FILES ---
// Serve static files (CSS, Images) from the 'public' folder
app.use(express.static(path.join(__dirname, 'public')));

// --- MIDDLEWARE FOR ACTIVE LINK ---
// This simple middleware helps highlight the active link in the navbar
app.use((req, res, next) => {
    res.locals.activePath = req.path;
    next();
});

// --- ROUTES ---

// 1. Home Page Route
app.get('/', (req, res) => {
    // Pass only the latest 3 posts to the home page
    const latestPosts = blogPosts.slice(0, 3);
    res.render('home', {
        title: "Home | Professional Blog",
        latestPosts
    });
});

// 2. About Us Page Route
app.get('/about', (req, res) => {
    res.render('about', {
        title: "About Us | Professional Blog",
        teamMembers
    });
});

// 3. Blogs Page Route
app.get('/blogs', (req, res) => {
    res.render('blogs', {
        title: "All Blogs | Professional Blog",
        blogPosts
    });
});

// 4. Contact Us Page Route
app.get('/contact', (req, res) => {
    res.render('contact', {
        title: "Contact Us | Professional Blog"
    });
});

// --- SERVER INITIALIZATION ---
app.listen(PORT, () => {
    console.log(`Server is running at http://localhost:${PORT}`);
    console.log('Press Ctrl+C to stop the server.');
});
