// PROGRAM 6 : CHARACTER IS VOWEL OR NOT - (START) --------------------->
#include <stdio.h>
void main()
{
    char x;

    // GET VALUE FROM USER
    printf("Enter the one alphabet : ");
    scanf("%c", &x);

    // IF-ELSE CONDITION WITH OR(||) OPERATOR
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
    {
        printf("%c is Vowel.", x);
    }
    else
    {
        printf("%c is not Vowel!", x);
    }
}
// PROGRAM 6 : CHARACTER IS VOWEL OR NOT - (END) --------------------->
