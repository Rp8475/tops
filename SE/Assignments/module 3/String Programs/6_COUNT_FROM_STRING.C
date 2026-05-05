// PROGRAM  6: COUNT TOTAL NUMBER OF ALPHANETS, DIGITS & SPECIAL CHARACTER FROM A STRING - (START) --------------------->

#include <stdio.h>

// Main Method
void main()
{

    // Initialize
    int i, alph = 0, digit = 0, spchar = 0;
    char str[100];

    // Get Input from user
    printf("Enter a String : ");
    gets(str);

    // Run a loop tiil end of the string
    while (str[i] != '\0')
    {
        // Only alphabets
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            alph++;
        }
        // Only digits
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }
        // for special characters
        else
        {
            spchar++;
        }
        i++;
    }
    // output
    printf("Toatl Alphabets : %d\n", alph);
    printf("Toatl Digits : %d\n", digit);
    printf("Toatl Special Characters : %d\n", spchar);
}
// PROGRAM 6 : COUNT TOTAL NUMBER OF ALPHANETS, DIGITS & SPECIAL CHARACTER FROM A STRING - (END) --------------------->