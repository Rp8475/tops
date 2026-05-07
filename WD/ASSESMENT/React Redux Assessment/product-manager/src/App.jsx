import React from 'react';
import { BrowserRouter as Router, Routes, Route } from 'react-router-dom';
import Home from './pages/Home';

/**
 * Main App component with Routing configuration
 */
function App() {
  return (
    <Router>
      <div className="min-h-screen bg-[#0f172a] text-white">
        <Routes>
          {/* Home Route */}
          <Route path="/" element={<Home />} />
          
          {/* Add more routes here if needed */}
          <Route path="*" element={<Home />} />
        </Routes>
      </div>
    </Router>
  );
}

export default App;
