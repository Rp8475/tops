// PROGRAM 2 : DISPLAY THE VALUE - (START) --------------------->
#include <stdio.h>
void main()
{
    int m, n;

    // GET VALUE FROM USER
    printf("Enter the value of m : ");
    scanf("%d", &m);

    // NESTED IF CONDITION
    if (m != 0)
    {
        if (m > 0)
        {
            n = 1;
        }
        else
        {
            n = -1;
        }
    }
    else
    {
        n = 0;
    }

    // PRINT OUTPUT
    printf("The value of m = %d\n", m);
    printf("The value of n = %d\n", n);
}
// PROGRAM 2 : DISPLAY THE VALUE - (END) --------------------->