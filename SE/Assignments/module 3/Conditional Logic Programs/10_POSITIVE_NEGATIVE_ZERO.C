// PROGRAM 5 : IF-ELSE LADDER STATEMENT - (START) --------------------->
#include <stdio.h>
void main()
{
    float n;

    // GET VALUE FROM USER
    printf("Enter Number : ");
    scanf("%d", &n);

    // IF-ELSE CONDITION
    if (n == 0)
    {
        printf("Zero..!", n);
    }
    else if (n > 0)
    {
        printf("Positive..!", n);
    }
    else
    {
        printf("Negative..!", n);
    }
}
// PROGRAM 5 : IF-ELSE LADDER STATEMENT - (END) <---------------------
