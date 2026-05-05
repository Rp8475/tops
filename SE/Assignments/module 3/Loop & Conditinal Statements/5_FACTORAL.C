// PROGRAM 5 : PRINT FACTORIAL OF GIVEN NUMBER - (START) --------------------->
#include <stdio.h>
void main()
{
    int i, fac = 1, n;

    printf("Enter the number : ");
    scanf("%d", &n);

    // for loop run till n
    for (i = 1; i <= n; i++)
    {
        fac = fac * i; // factorial formula
    }
    printf("Factorial of %d is %d", n, fac);
}
// PROGRAM 5 : PRINT FACTORIAL OF GIVEN NUMBER - (END) --------------------->