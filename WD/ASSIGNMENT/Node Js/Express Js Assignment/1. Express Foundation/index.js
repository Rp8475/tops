const express = require('express');
const path = require('path');
const app = express();
const PORT = 3000;

app.use(express.json());
app.use(express.static(path.join(__dirname, 'public')));

// Mock Data Registry
let resources = [
    { id: 1, type: "Core_Process", status: "Active" },
    { id: 2, type: "Memory_Buffer", status: "Optimized" },
    { id: 3, type: "Signal_Relay", status: "Standby" }
];

// --- 1. GET ROUTE (Parameters) ---
// Requirement: Demonstrate how to handle request parameters
app.get('/api/resource/:id', (req, res) => {
    const id = parseInt(req.params.id);
    const item = resources.find(r => r.id === id);
    
    console.log(`\n🔍 [PARAM_EXTRACT] Fetching Resource ID: ${id}`);
    
    if (item) {
        res.json({ status: "SUCCESS", extraction: "Parameters", data: item });
    } else {
        res.status(404).json({ status: "NOT_FOUND", message: `ID ${id} not in registry.` });
    }
});

// --- 2. GET ROUTE (Query Strings) ---
// Requirement: Demonstrate how to handle query strings
app.get('/api/search', (req, res) => {
    const filter = req.query.type;
    console.log(`\n🔎 [QUERY_EXTRACT] Filtering registry by type: "${filter || 'All'}"`);
    
    let results = filter ? resources.filter(r => r.type.toLowerCase().includes(filter.toLowerCase())) : resources;
    
    res.json({ 
        status: "SUCCESS", 
        extraction: "Query String", 
        query_received: filter, 
        matches: results 
    });
});

// --- 3. POST ROUTE (Body Handling) ---
// Requirement: Demonstrate POST method
app.post('/api/resource', (req, res) => {
    const { type, status } = req.body;
    const newItem = {
        id: resources.length > 0 ? resources[resources.length - 1].id + 1 : 1,
        type: type || "Unknown_Entity",
        status: status || "Initialized"
    };
    
    resources.push(newItem);
    console.log(`\n➕ [POST_MUTATION] New resource committed: ${newItem.type}`);
    res.status(201).json({ status: "CREATED", data: newItem });
});

// --- 4. DELETE ROUTE (State Removal) ---
// Requirement: Demonstrate DELETE method
app.delete('/api/resource/:id', (req, res) => {
    const id = parseInt(req.params.id);
    const initialLength = resources.length;
    resources = resources.filter(r => r.id !== id);
    
    console.log(`\n🗑️ [DELETE_MUTATION] Decommissioning Resource ID: ${id}`);
    
    if (resources.length < initialLength) {
        res.json({ status: "DELETED", id_removed: id });
    } else {
        res.status(404).json({ status: "FAILED", message: "ID not found." });
    }
});

app.listen(PORT, () => {
    console.log(`\n🚀 Task 1 Express Nexus online at http://localhost:${PORT}`);
    console.log(`Interpreters active: req.params, req.query, req.body\n`);
});
