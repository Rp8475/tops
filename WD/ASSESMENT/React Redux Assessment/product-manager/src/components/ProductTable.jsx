import React from 'react';
import { Edit2, Trash2, ShoppingCart } from 'lucide-react';

/**
 * ProductTable component to display the list of products
 */
const ProductTable = ({ products, onEdit, onDelete }) => {
  // If no products found, show a clean empty state
  if (products.length === 0) {
    return (
      <div className="glass-card p-12 text-center">
        <ShoppingCart className="mx-auto h-16 w-16 text-white/20 mb-4" />
        <h3 className="text-xl font-semibold text-white/60">No records found</h3>
        <p className="text-white/40">Try adding a new product or changing your search.</p>
      </div>
    );
  }

  return (
    <div className="overflow-x-auto">
      <table className="w-full text-left border-collapse">
        <thead>
          <tr className="border-b border-white/10">
            <th className="py-4 px-4 text-white/60 font-medium">Image</th>
            <th className="py-4 px-4 text-white/60 font-medium">Product Name</th>
            <th className="py-4 px-4 text-white/60 font-medium text-right">Price</th>
            <th className="py-4 px-4 text-white/60 font-medium text-right">Quantity</th>
            <th className="py-4 px-4 text-white/60 font-medium hidden md:table-cell">Date</th>
            <th className="py-4 px-4 text-white/60 font-medium text-center">Actions</th>
          </tr>
        </thead>
        <tbody className="divide-y divide-white/5">
          {products.map((product) => (
            <tr key={product.id} className="hover:bg-white/5 transition-colors group">
              <td className="py-4 px-4">
                <img 
                  src={product.photo || 'https://via.placeholder.com/150'} 
                  alt={product.name} 
                  className="w-12 h-12 rounded-lg object-cover shadow-lg group-hover:scale-110 transition-transform"
                />
              </td>
              <td className="py-4 px-4">
                <div className="font-semibold text-white">{product.name}</div>
                <div className="text-xs text-white/40 truncate max-w-[200px]">{product.description}</div>
              </td>
              <td className="py-4 px-4 text-right">
                <div className="text-white">${product.offerPrice || product.price}</div>
                {product.offerPrice && (
                  <div className="text-xs text-white/30 line-through">${product.price}</div>
                )}
              </td>
              <td className="py-4 px-4 text-right">
                <span className={`px-2 py-1 rounded-md text-xs font-bold ${product.quantity > 0 ? 'bg-green-500/20 text-green-400' : 'bg-red-500/20 text-red-400'}`}>
                  {product.quantity} left
                </span>
              </td>
              <td className="py-4 px-4 text-white/40 text-sm hidden md:table-cell">
                {product.addedDate}
              </td>
              <td className="py-4 px-4">
                <div className="flex justify-center gap-2">
                  {/* Edit Button */}
                  <button 
                    onClick={() => onEdit(product)}
                    className="p-2 rounded-lg bg-blue-500/20 text-blue-400 hover:bg-blue-500 hover:text-white transition-all"
                    title="Edit"
                  >
                    <Edit2 size={18} />
                  </button>
                  {/* Delete Button */}
                  <button 
                    onClick={() => onDelete(product.id)}
                    className="p-2 rounded-lg bg-red-500/20 text-red-400 hover:bg-red-500 hover:text-white transition-all"
                    title="Delete"
                  >
                    <Trash2 size={18} />
                  </button>
                </div>
              </td>
            </tr>
          ))}
        </tbody>
      </table>
    </div>
  );
};

export default ProductTable;
