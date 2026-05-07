import { configureStore } from '@reduxjs/toolkit';
import productReducer from '../features/products/productSlice';

/**
 * Configure the Redux store with our product reducer
 */
export const store = configureStore({
  reducer: {
    products: productReducer,
  },
});

export default store;
