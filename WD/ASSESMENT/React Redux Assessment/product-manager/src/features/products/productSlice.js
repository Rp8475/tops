import { createSlice, createAsyncThunk } from '@reduxjs/toolkit';
import { 
  fetchProductsAPI, 
  addProductAPI, 
  updateProductAPI, 
  deleteProductAPI 
} from './productAPI';

// Initial state for our product feature
const initialState = {
  products: [],
  filteredProducts: [], // used for real-time search
  loading: false,
  error: null,
  searchTerm: '',
};

/**
 * Thunk to fetch products from the server
 */
export const fetchProducts = createAsyncThunk(
  'products/fetchProducts',
  async (_, { rejectWithValue }) => {
    try {
      return await fetchProductsAPI();
    } catch (err) {
      return rejectWithValue(err.message);
    }
  }
);

/**
 * Thunk to add a new product
 */
export const addProduct = createAsyncThunk(
  'products/addProduct',
  async (productData, { rejectWithValue }) => {
    try {
      return await addProductAPI(productData);
    } catch (err) {
      return rejectWithValue(err.message);
    }
  }
);

/**
 * Thunk to update an existing product
 */
export const updateProduct = createAsyncThunk(
  'products/updateProduct',
  async ({ id, data }, { rejectWithValue }) => {
    try {
      return await updateProductAPI(id, data);
    } catch (err) {
      return rejectWithValue(err.message);
    }
  }
);

/**
 * Thunk to delete a product
 */
export const deleteProduct = createAsyncThunk(
  'products/deleteProduct',
  async (id, { rejectWithValue }) => {
    try {
      return await deleteProductAPI(id);
    } catch (err) {
      return rejectWithValue(err.message);
    }
  }
);

const productSlice = createSlice({
  name: 'products',
  initialState,
  reducers: {
    // Reducer to handle real-time search/filtering
    setSearchTerm: (state, action) => {
      state.searchTerm = action.payload;
      const term = action.payload.toLowerCase();
      state.filteredProducts = state.products.filter(p => 
        p.name.toLowerCase().includes(term) || 
        p.description.toLowerCase().includes(term)
      );
    },
  },
  extraReducers: (builder) => {
    builder
      // Fetch Products
      .addCase(fetchProducts.pending, (state) => {
        state.loading = true;
      })
      .addCase(fetchProducts.fulfilled, (state, action) => {
        state.loading = false;
        state.products = action.payload;
        // Also update filtered list on load
        state.filteredProducts = action.payload.filter(p => 
          p.name.toLowerCase().includes(state.searchTerm.toLowerCase())
        );
      })
      .addCase(fetchProducts.rejected, (state, action) => {
        state.loading = false;
        state.error = action.payload;
      })
      // Add Product
      .addCase(addProduct.fulfilled, (state, action) => {
        state.products.push(action.payload);
        // Refresh filtered list
        state.filteredProducts = state.products.filter(p => 
            p.name.toLowerCase().includes(state.searchTerm.toLowerCase())
          );
      })
      // Update Product
      .addCase(updateProduct.fulfilled, (state, action) => {
        const index = state.products.findIndex(p => p.id === action.payload.id);
        if (index !== -1) {
          state.products[index] = action.payload;
        }
        // Refresh filtered list
        state.filteredProducts = state.products.filter(p => 
            p.name.toLowerCase().includes(state.searchTerm.toLowerCase())
          );
      })
      // Delete Product
      .addCase(deleteProduct.fulfilled, (state, action) => {
        state.products = state.products.filter(p => p.id !== action.payload);
        state.filteredProducts = state.filteredProducts.filter(p => p.id !== action.payload);
      });
  },
});

export const { setSearchTerm } = productSlice.actions;
export default productSlice.reducer;
