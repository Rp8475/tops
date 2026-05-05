// PROGRAM 1 : FIND LENGTH OF STRING WITHOUT LIBRARY FUNCTION - (START) --------------------->

#include <stdio.h>
// Main Method
void main()
{

    // Initialize
    char a[4], i, len = 0;

    // Get Input From User
    printf("Enter a String : ");
    gets(a); // gets() is also used as scanf()

    // Count Length of String
    for (i = 0; a[i] != '\0'; i++) // Iterate through the string until the null terminator '\0' is encountered
    {
        len++; // Increment length counter for each character
    }

    // Output
    printf("\nLength of String is %d", len);
}

// PROGRAM 1 : FIND LENGTH OF STRING WITHOUT LIBRARY FUNCTION - (END) --------------------->