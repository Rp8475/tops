// PROGRAM 2 : SEPARATE INDIVIDUAL CHARACTER FROM A STRING - (START) --------------------->

#include <stdio.h>
// Main Method
void main()
{

    // Initialize
    char a[10], i;

    // Get Input From User
    printf("Enter a String : ");
    gets(a);

    printf("Separate String\n");
    for (i = 0; a[i] != '\0'; i++)
    {                         // Loop through the string until the null terminator '\0' is encountered
        printf("%c\n", a[i]); // Output
    }
}

// PROGRAM 2 : SEPARATE INDIVIDUAL CHARACTER FROM A STRING - (END) --------------------->