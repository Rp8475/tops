// parseJson.js
// This function attempts to parse a JSON string and handles errors using try...catch.

/**
 * Attempts to parse a JSON string.
 * @param {string} jsonString - The JSON string to parse.
 * @returns {object|null} The parsed object if successful, or null if parsing fails.
 */
function parseJson(jsonString) {
    try {
        return JSON.parse(jsonString);
    } catch (error) {
        console.error('Failed to parse JSON:');
        return null;
    }
}

// Example usage:
// const result = parseJson('{"name": "John"}');
// console.log(result);
// const badResult = parseJson('{name: John}');
// console.log(badResult);



// Run example usage if this file is executed directly
if (require.main === module) {
    const validJson = '{"name": "John"}';
    const invalidJson = '{name: John}';
    console.log('Parsing valid JSON:');
    const result = parseJson(validJson);
    console.log(result); // Should output: { name: 'John' }

    console.log('\nParsing invalid JSON:');
    const badResult = parseJson(invalidJson);
    console.log(badResult); // Should output: null

    // Additional example: using try...catch directly
    console.log('\n--- Direct try...catch example ---');
    const jsonString = '{"name":"rohan"}';
    try {
        const obj = JSON.parse(jsonString);
        console.log('Parsed object:', obj);
    } catch (err) {
        console.error('Error parsing JSON:');
    }

    const badJsonString = '{name:"rohan"}';
    try {
        const obj = JSON.parse(badJsonString);
        console.log('Parsed object:', obj);
    } catch (err) {
        console.error('Error parsing JSON:');
    }
}

module.exports = parseJson;
