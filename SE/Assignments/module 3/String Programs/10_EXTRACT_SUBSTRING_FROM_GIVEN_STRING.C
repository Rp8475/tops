// PROGRAM 10 : EXTRACTING SUBSTRING FROM GIVEN STRING - (START) --------------------->

#include <stdio.h>
void main()
{
    char str[100], substr[100];
    int i = 0, pos, length;

    // Title
    printf("Extracting String\n");
    printf("=============================\n");

    // Enter string from user
    printf("Enter a String : ");
    gets(str);

    // Position from extracting string
    printf("Enter a Extracting Position of String : ");
    scanf("%d", &pos);

    // Length for Substring
    printf("Enter the Length for Substring : ");
    scanf("%d", &length);

    // Extracting process
    while (i < length)
    {
        substr[i] = str[pos + i - 1];
        i++;
    }
    substr[i] = '\0';

    // Display the substring
    printf("Substring from given String : %s", substr);
}

// PROGRAM 10 : EXTRACTING SUBSTRING FROM GIVEN STRING - (END) --------------------->