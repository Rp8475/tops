// PROGRAM 5 : COMPARE STRING WITHOUT LIBRARY FUNCTION - (START) --------------------->
#include <stdio.h>
void main()
{
    char str1[100], str2[10];
    int i;

    printf("Enter String 1 : ");
    scanf("%s", str1);
    printf("Enter String 2 : ");
    scanf("%s", str2);

    // Compare the two strings character by character
    while (str1[i] == str2[i] && str1[i] != '\0' == str2[i] != '\0')
    {
        i++; // Move to the next character
    }
    if (str1[i] == str2[i]) // Check Both strings are same or not
    {
        printf("Strings are equal.");
    }
    else
    {
        printf("Strings are not equal.");
    }
}
// PROGRAM 5 : COMPARE STRING WITHOUT LIBRARY FUNCTION - (END) --------------------->