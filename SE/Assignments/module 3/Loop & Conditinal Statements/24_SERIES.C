// PROGRAM 24 : PRINT SERIES - (START) --------------------->
// 1 + 2 + 3 + 4 + 5 + ... + n
#include <stdio.h>
void main()
{
    int n, i;

    printf("Enter Number : ");
    scanf("%d", &n);

    // print the 1st digit of series
    int sum = 1;
    printf("%d", sum);

    // for loop is start from 2 because sum = 1 is declared
    for (i = 2; i <= n; i++)
    {
        printf(" + %d", i);
        sum = sum + i;
    }
    printf(" = %d", sum);
}
// PROGRAM 24 : PRINT SERIES - (END) --------------------->