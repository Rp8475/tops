// PROGRAM 4 : COUNT TOTAL NUMBER OF WORDS FROM A STRING - (START) --------------------->

#include <stdio.h> // Header File
// #define MAX_SIZE 100 // Maximum string size

// Main Method
int main()
{
    // Initialize
    char str[100];
    int i = 0, words = 1;

    // Input string from user
    printf("Enter any string: ");
    gets(str);

    // Runs a loop till end of string
    while (str[i] != '\0')
    {
        // If the current character(str[i]) is white space
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
        {
            words++; // Increment word count for each whitespace character
        }
        i++; // Move to the next character
    }

    // Output
    printf("Total number of words = %d", words);
}
// PROGRAM 4 : COUNT TOTAL NUMBER OF WORDS FROM A STRING - (END) --------------------->