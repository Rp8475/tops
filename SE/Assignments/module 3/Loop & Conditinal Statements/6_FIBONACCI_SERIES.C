// PROGRAM 6 : PRINT FIBONACCI SERIES OF GIVEN NUMBER - (START) --------------------->
#include <stdio.h>
void main()
{
    int i, fTerm = 0, sTerm = 1, n, nexterm = fTerm + sTerm;

    printf("Enter Number : ");
    scanf("%d", &n);

    // first term & second term is declared
    printf("%d\n%d\n", fTerm, sTerm);

    // for loop start from 3 because 1st & 2nd term is already print
    for (i = 3; i <= n; i++)
    {
        printf("%d\n", nexterm);
        fTerm = sTerm;
        sTerm = nexterm;
        nexterm = fTerm + sTerm;
    }
}
// PROGRAM 6 : PRINT FIBONACCI SERIES OF GIVEN NUMBER - (END) --------------------->

// n1 = 0 , n2 = 1;
// n3 = n1 + n2;
// printf(n3);
// n1 = n2;
// n2 = n3;