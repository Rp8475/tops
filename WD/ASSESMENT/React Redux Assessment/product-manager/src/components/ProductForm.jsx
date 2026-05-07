import React, { useState, useEffect } from 'react';
import { useDispatch } from 'react-redux';
import { addProduct, updateProduct } from '../features/products/productSlice';
import { X, Upload } from 'lucide-react';

/**
 * ProductForm component for Adding and Editing products
 */
const ProductForm = ({ editingProduct, onClose }) => {
  const dispatch = useDispatch();
  
  // Initial state for the form
  const initialFormState = {
    name: '',
    price: '',
    offerPrice: '',
    quantity: '',
    description: '',
    addedDate: new Date().toISOString().split('T')[0], // Default to today
    photo: '',
  };

  const [formData, setFormData] = useState(initialFormState);
  const [errors, setErrors] = useState({});

  // If we are editing, pre-fill the form
  useEffect(() => {
    if (editingProduct) {
      setFormData(editingProduct);
    } else {
      setFormData(initialFormState);
    }
  }, [editingProduct]);

  // Handle input changes
  const handleChange = (e) => {
    const { name, value } = e.target;
    setFormData({ ...formData, [name]: value });
    
    // Clear error for this field as the user types
    if (errors[name]) {
      setErrors({ ...errors, [name]: '' });
    }
  };

  // Basic validation logic
  const validate = () => {
    const newErrors = {};
    if (!formData.name.trim()) newErrors.name = 'Product name is required';
    if (!formData.price) newErrors.price = 'Price is required';
    if (!formData.quantity) newErrors.quantity = 'Quantity is required';
    if (!formData.description.trim()) newErrors.description = 'Description is required';
    
    setErrors(newErrors);
    return Object.keys(newErrors).length === 0;
  };

  // Handle form submission
  const handleSubmit = (e) => {
    e.preventDefault(); // prevent page reload

    if (!validate()) return;

    if (editingProduct) {
      // Dispatch update action
      dispatch(updateProduct({ id: editingProduct.id, data: formData }));
    } else {
      // Dispatch add action
      dispatch(addProduct(formData));
    }
    
    // Close form/modal after success
    onClose();
  };

  return (
    <div className="fixed inset-0 z-50 flex items-center justify-center p-4 bg-black/60 backdrop-blur-sm">
      <div className="glass-card w-full max-w-2xl max-h-[90vh] overflow-y-auto p-8 relative">
        {/* Close Button */}
        <button 
          onClick={onClose}
          className="absolute top-4 right-4 text-white/60 hover:text-white transition-colors"
        >
          <X size={24} />
        </button>

        <h2 className="text-3xl font-bold mb-6 bg-gradient-to-r from-primary to-secondary bg-clip-text text-transparent">
          {editingProduct ? 'Edit Product' : 'Add New Product'}
        </h2>

        <form onSubmit={handleSubmit} className="space-y-6">
          <div className="grid grid-cols-1 md:grid-cols-2 gap-6">
            {/* Product Name */}
            <div>
              <label className="block text-white/80 mb-2 text-sm font-medium">Product Name</label>
              <input
                type="text"
                name="name"
                value={formData.name}
                onChange={handleChange}
                placeholder="e.g. Sony WH-1000XM4"
                className={`glass-input w-full ${errors.name ? 'border-red-500/50' : ''}`}
              />
              {errors.name && <p className="text-red-400 text-xs mt-1">{errors.name}</p>}
            </div>

            {/* Price */}
            <div>
              <label className="block text-white/80 mb-2 text-sm font-medium">Original Price ($)</label>
              <input
                type="number"
                name="price"
                value={formData.price}
                onChange={handleChange}
                placeholder="0.00"
                className={`glass-input w-full ${errors.price ? 'border-red-500/50' : ''}`}
              />
              {errors.price && <p className="text-red-400 text-xs mt-1">{errors.price}</p>}
            </div>

            {/* Offer Price */}
            <div>
              <label className="block text-white/80 mb-2 text-sm font-medium">Offer Price ($)</label>
              <input
                type="number"
                name="offerPrice"
                value={formData.offerPrice}
                onChange={handleChange}
                placeholder="0.00"
                className="glass-input w-full"
              />
            </div>

            {/* Quantity */}
            <div>
              <label className="block text-white/80 mb-2 text-sm font-medium">Quantity</label>
              <input
                type="number"
                name="quantity"
                value={formData.quantity}
                onChange={handleChange}
                placeholder="0"
                className={`glass-input w-full ${errors.quantity ? 'border-red-500/50' : ''}`}
              />
              {errors.quantity && <p className="text-red-400 text-xs mt-1">{errors.quantity}</p>}
            </div>

            {/* Added Date */}
            <div>
              <label className="block text-white/80 mb-2 text-sm font-medium">Added Date</label>
              <input
                type="date"
                name="addedDate"
                value={formData.addedDate}
                onChange={handleChange}
                className="glass-input w-full"
              />
            </div>

            {/* Photo URL (Simplified for local setup) */}
            <div>
              <label className="block text-white/80 mb-2 text-sm font-medium">Photo URL</label>
              <div className="flex gap-2">
                <input
                  type="text"
                  name="photo"
                  value={formData.photo}
                  onChange={handleChange}
                  placeholder="https://..."
                  className="glass-input w-full"
                />
              </div>
            </div>
          </div>

          {/* Description */}
          <div>
            <label className="block text-white/80 mb-2 text-sm font-medium">Description</label>
            <textarea
              name="description"
              rows="3"
              value={formData.description}
              onChange={handleChange}
              placeholder="Tell us about the product..."
              className={`glass-input w-full resize-none ${errors.description ? 'border-red-500/50' : ''}`}
            ></textarea>
            {errors.description && <p className="text-red-400 text-xs mt-1">{errors.description}</p>}
          </div>

          {/* Form Actions */}
          <div className="flex justify-end gap-4 pt-4">
            <button
              type="button"
              onClick={onClose}
              className="px-6 py-2 rounded-xl text-white/60 hover:text-white transition-colors"
            >
              Cancel
            </button>
            <button type="submit" className="btn-gradient">
              {editingProduct ? 'Update Product' : 'Add Product'}
            </button>
          </div>
        </form>
      </div>
    </div>
  );
};

export default ProductForm;
