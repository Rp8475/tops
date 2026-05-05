// PROGRAM 13 : REMOVE ALL FROM STRING EXCEPT ALPHABETS - (START) --------------------->
#include <stdio.h>

void main()
{
    char str[100];
    int i, j;

    printf("Remove characters in String Except Alphabets \n\n");

    printf("Input the string : ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        // Check while the current character is not an alphabet
        while (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z' || str[i] == '\0')))
        {
            // Shift all characters to the left by one position
            for (j = i; str[j] != '\0'; j++)
            {
                str[j] = str[j + 1];
            }
            str[j] = '\0';
        }
    }

    printf("Output String : %s", str);
}
// PROGRAM 13 : REMOVE ALL FROM STRING EXCEPT ALPHABETS - (END) --------------------->