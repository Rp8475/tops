// PROGRAM 3 : GET 10 VALUES FRO  USER AND FIND EVEN-ODD AND THEIR SUM - (START) --------------------->
#include <stdio.h>
void main()
{
    int i = 1, n, ev = 0, od = 0, evcount = 0, odcount = 0;

    while (i <= 10)
    {
        printf("\nEnter the number : ");
        scanf("%d", &n);

        // Check if the number is even
        if (n % 2 == 0)
        {
            printf("%d is even", n);
            ev++;                  // Increment the even number
            evcount = evcount + n; // Add the number to the sum of even numbers
        }
        else
        {
            printf("%d is Odd", n);
            od++;                  // Increment the odd number
            odcount = odcount + n; // Add the number to the sum of odd numbers
        }
        i++;
    }
    printf("\nnumbers of even are : %d", ev);
    printf("\nnumbers of odd are : %d", od);
    printf("\nSum of even numbers : %d", evcount);
    printf("\nSum of odd numbers : %d", odcount);
}
// PROGRAM 3 : GET 10 VALUES FRO  USER AND FIND EVEN-ODD AND THEIR SUM - (START) --------------------->
