// PROGRAM 8 : COUNT TOTAL NO. OF VOWEL & CONSONANT FROM STRING - (START) --------------------->

#include <stdio.h>
#include <string.h>
// Main Method
void main()
{
    // Initialize
    int vowel = 0, consonant = 0, i;
    char str[100];

    // get value from user
    printf("Enter a String : ");
    gets(str);

    // Run loop tiil and of the String
    for (i = 0; str[i] != '\0'; i++)
    {
        // if whole string has only alphabets
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            // if string has vowel characters
            if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                vowel++; // Increment vowel counter
            }
            // else others are consonant
            else
            {
                consonant++; // Increment Consonant counter
            }
        }
    }
    // output
    printf("Vowel : %d", vowel);
    printf("Consonant : %d\n", consonant);
}

// PROGRAM 8 : COUNT TOTAL NO. OF VOWEL & CONSONANT FROM STRING - (END) --------------------->