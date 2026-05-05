// PROGRAM 27 : PRINT SERIES - (START) --------------------->
//  27  1/2 - 2/3 + 3/4 - 4/5 + 5/6 ..........N

#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0;

    printf("Enter your number : ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum -= (float)i / (i + 1); // Subtract for even index terms
        }
        else
        {
            sum += (float)i / (i + 1); // Add for odd index terms
        }
    }

    printf("The sum of the series is: %f\n", sum);
}

// PROGRAM 27 : PRINT SERIES - (END) --------------------->