// PROGRAM 11 : REPLACE UPPERCASE TO LOWERCASE & VICE-VERSA - (START) --------------------->
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char a[100];
    int count, c, i;
    printf("Replace lowercase to uppercase & vice-versa\n\n");

    printf("Input the string : ");
    gets(a);
    sizeof(a);
    stdin;

    i = strlen(a); // Get the length of the input string
    count = i;

    //    printf("\nThe given sentence is   : %s", a);

    // Output the transformed string with cases swapped
    printf("After Case changed the string  is: ");
    for (i = 0; i < count; i++)
    {
        // Swap cases: convert lowercase to uppercase and vice versa
        c = islower(a[i]) ? toupper(a[i]) : tolower(a[i]);
        putchar(c); // Print the character
    }
    printf("");
}
// PROGRAM 11 : REPLACE UPPERCASE TO LOWERCASE & VICE-VERSA - (END) --------------------->