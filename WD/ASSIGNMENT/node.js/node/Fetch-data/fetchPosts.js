// Fetch posts from JSONPlaceholder API and log their titles
fetch('https://jsonplaceholder.typicode.com/posts')
  .then(response => {
    // Check if the response is successful
    if (!response.ok) {
      throw new Error(`HTTP error! status: ${response.status}`);
    }
    // Parse the JSON response
    return response.json();
  })
  .then(posts => {
    // Log the title of each post
    console.log('Posts from JSONPlaceholder API:\n');
    posts.forEach((post, index) => {
      console.log(`${index + 1}. ${post.title}`);
    });
  })
  .catch(error => {
    // Handle any errors that occur
    console.error('Error fetching posts:', error);
  });
