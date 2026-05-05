// PROGRAM 3 : REVERSE STRING USING RECURSION - (START) --------------------->
#include <stdio.h>
rev(char str[], int i) // rev function with two parameter for reverse of string
{
    if (str[i] != NULL)
    {
        rev(str, i + 1); // Recursion
        printf("%c", str[i]);
    }
}
main()
{
    char str[10];
    printf("Enter the string : ");
    gets(str);   // store string in str variable
    rev(str, 0); // rev function calling
}
// PROGRAM 3 : REVERSE STRING USING RECURSION - (END) --------------------->