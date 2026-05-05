// PROGRAM 7 : FIND LENGTH OF STRING WITHOUT LIBRARY FUNCTION - (START) --------------------->

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
    for (i = 0; a[i] != '\0'; i++)
    {
        len++;
    }

    // Output
    printf("\nLength of String is %d", len);
}

// PROGRAM 7 : FIND LENGTH OF STRING WITHOUT LIBRARY FUNCTION - (END) --------------------->