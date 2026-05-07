import React, { useEffect, useState } from 'react';
import { useDispatch, useSelector } from 'react-redux';
import { fetchProducts, deleteProduct } from '../features/products/productSlice';
import ProductTable from '../components/ProductTable';
import ProductForm from '../components/ProductForm';
import SearchBar from '../components/SearchBar';
import { Plus, RefreshCcw, LayoutGrid } from 'lucide-react';

/**
 * Home Page Component
 */
const Home = () => {
  const dispatch = useDispatch();
  
  // Select data from Redux store
  const { filteredProducts, loading, error } = useSelector((state) => state.products);
  
  // Local state for modal visibility and editing data
  const [isFormOpen, setIsFormOpen] = useState(false);
  const [editingProduct, setEditingProduct] = useState(null);

  // Fetch products on component mount
  useEffect(() => {
    dispatch(fetchProducts());
  }, [dispatch]);

  // Handle Edit click
  const handleEdit = (product) => {
    setEditingProduct(product);
    setIsFormOpen(true);
  };

  // Handle Delete click with confirmation
  const handleDelete = (id) => {
    if (window.confirm('Are you sure you want to delete this product?')) {
      dispatch(deleteProduct(id));
    }
  };

  // Handle closing the form
  const handleCloseForm = () => {
    setIsFormOpen(false);
    setEditingProduct(null);
  };

  return (
    <div className="min-height-screen py-10 px-4 md:px-10 lg:px-20">
      {/* Header Section */}
      <div className="flex flex-col md:flex-row justify-between items-center mb-12 gap-6">
        <div>
          <h1 className="text-4xl md:text-5xl font-extrabold text-white mb-2 flex items-center gap-3">
            <LayoutGrid className="text-primary" size={40} />
            Product <span className="text-transparent bg-clip-text bg-gradient-to-r from-primary to-secondary">Manager</span>
          </h1>
          <p className="text-white/40 text-lg">Manage your inventory with ease and style.</p>
        </div>

        <button 
          onClick={() => setIsFormOpen(true)}
          className="btn-gradient flex items-center gap-2 group"
        >
          <Plus size={20} className="group-hover:rotate-90 transition-transform" />
          Add New Product
        </button>
      </div>

      {/* Search Bar Section */}
      <SearchBar />

      {/* Main Content Area */}
      <div className="glass-card p-6 md:p-8">
        {loading ? (
          <div className="flex flex-col items-center justify-center py-20">
            <RefreshCcw className="animate-spin text-primary mb-4" size={48} />
            <p className="text-white/60 text-lg">Fetching your products...</p>
          </div>
        ) : error ? (
          <div className="bg-red-500/10 border border-red-500/20 p-6 rounded-2xl text-center">
            <p className="text-red-400 mb-2">Oops! Something went wrong.</p>
            <p className="text-white/40 text-sm">{error}</p>
          </div>
        ) : (
          <ProductTable 
            products={filteredProducts} 
            onEdit={handleEdit} 
            onDelete={handleDelete} 
          />
        )}
      </div>

      {/* Add/Edit Product Modal */}
      {isFormOpen && (
        <ProductForm 
          editingProduct={editingProduct} 
          onClose={handleCloseForm} 
        />
      )}

      {/* Footer Info */}
      <footer className="mt-12 text-center text-white/20 text-sm">
        Built with React + Redux Toolkit & Tailwind CSS
      </footer>
    </div>
  );
};

export default Home;
