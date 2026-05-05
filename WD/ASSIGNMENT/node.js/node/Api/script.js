const resultsDiv = document.getElementById('results');

async function fetchProducts() {
    resultsDiv.innerHTML = '<div class="loading">Loading products...</div>';
    
    try {
        const response = await fetch('https://dummyjson.com/products?limit=10');
        const data = await response.json();
        
        let html = '';
        data.products.forEach(product => {
            html += `
                <div class="product">
                    <h3>${product.title}</h3>
                    <p><strong>Category:</strong> ${product.category}</p>
                    <p><strong>Rating:</strong> ⭐ ${product.rating}/5</p>
                    <p>${product.description.substring(0, 100)}...</p>
                    <div class="price">$${product.price}</div>
                </div>
            `;
        });
        resultsDiv.innerHTML = html;
    } catch (error) {
        resultsDiv.innerHTML = `<div class="error">Error: ${error.message}</div>`;
    }
}
