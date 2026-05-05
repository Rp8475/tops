// PROGRAM 8 : REVERSE STRING AND CHECK PALINDROME OR NOT - (START) --------------------->
#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];

    printf("Enter a string: ");
    gets(a);

    // Copy the original string and convert into reverse orderx
    strcpy(b, a);
    strrev(b);

    // Compare the original and reversed strings
    if (strcmp(a, b) == 0)
    {
        printf("%s = is a palindrome string.\n", a);
    }
    else
    {
        printf("%s = is not a palindrome string.\n", b);
    }
}
// PROGRAM 8 : REVERSE STRING AND CHECK PALINDROME OR NOT - (END) --------------------->