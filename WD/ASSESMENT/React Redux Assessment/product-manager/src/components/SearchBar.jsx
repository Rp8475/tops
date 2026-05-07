import React from 'react';
import { useDispatch, useSelector } from 'react-redux';
import { setSearchTerm } from '../features/products/productSlice';
import { Search } from 'lucide-react';

/**
 * SearchBar component for real-time product filtering
 */
const SearchBar = () => {
  const dispatch = useDispatch();
  const searchTerm = useSelector((state) => state.products.searchTerm);

  // Handle input change and update the store
  const handleChange = (e) => {
    dispatch(setSearchTerm(e.target.value));
  };

  return (
    <div className="relative w-full max-w-md mx-auto mb-8">
      {/* Search Icon */}
      <div className="absolute inset-y-0 left-0 pl-3 flex items-center pointer-events-none">
        <Search className="h-5 w-5 text-white/40" />
      </div>
      
      {/* Search Input */}
      <input
        type="text"
        className="glass-input w-full pl-10"
        placeholder="Search products by name or description..."
        value={searchTerm}
        onChange={handleChange}
      />
    </div>
  );
};

export default SearchBar;
