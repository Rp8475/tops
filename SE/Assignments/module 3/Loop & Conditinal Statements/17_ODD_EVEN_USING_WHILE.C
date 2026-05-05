// PROGRAM 17 : ODD EVEN USING WHILE LOOP - (START) --------------------->
#include <stdio.h>
void main()
{
    int i = 0, n;

    // Loop to process 5 integers
    while (i < 5)
    {
        printf("Enter Integer : ");
        scanf("%d", &n);

        // Check if the entered number is even or odd
        if (n % 2 == 0)
        {
            printf("%d is Even.\n\n", n);
        }
        else
        {
            printf("%d is Odd.\n\n", n);
        }
        i++; // Increment the loop counter
    }
}
// PROGRAM 17 : ODD EVEN USING WHILE LOOP - (END) --------------------->