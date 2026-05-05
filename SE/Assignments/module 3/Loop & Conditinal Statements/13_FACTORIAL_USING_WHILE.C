// PROGRAM 13 : PRINT FACTORIAL OF GIVEN NUMBER USING WHILE LOOP - (START) --------------------->
#include <stdio.h>
void main()
{
    int i = 1, fac = 1, n;

    printf("Enter integer : ");
    scanf("%d", &n);

    while (i <= n)
    {
        fac = fac * i; // factorial formula
        i++;
    }

    printf("%d", fac);
}
// PROGRAM 13 : PRINT FACTORIAL OF GIVEN NUMBER USING WHILE LOOP - (END) --------------------->