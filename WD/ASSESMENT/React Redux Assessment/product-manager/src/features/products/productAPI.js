import axios from 'axios';

// Base URL for our local JSON server
const API_URL = 'http://localhost:3000/products';

/**
 * API function to fetch all products
 */
export const fetchProductsAPI = async () => {
  const response = await axios.get(API_URL);
  return response.data;
};

/**
 * API function to add a new product
 */
export const addProductAPI = async (productData) => {
  const response = await axios.post(API_URL, productData);
  return response.data;
};

/**
 * API function to update an existing product
 */
export const updateProductAPI = async (id, productData) => {
  const response = await axios.put(`${API_URL}/${id}`, productData);
  return response.data;
};

/**
 * API function to delete a product
 */
export const deleteProductAPI = async (id) => {
  await axios.delete(`${API_URL}/${id}`);
  return id; // return the id to help update the store
};
