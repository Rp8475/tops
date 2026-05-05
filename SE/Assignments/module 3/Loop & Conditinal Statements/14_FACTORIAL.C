// PROGRAM 14 : PRINT FACTORIAL OF 5 NUMBER FROM USER - (START) --------------------->
#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int n) // parameters
{
    if (n == 1)
    {
        return 1;
    }
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int numbers[5], fact;

    // Input 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Calculate and display factorials
    printf("\nFactorials of the entered numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] < 0)
        {
            printf("Factorial of negative numbers is undefined.\n");
        }
        else
        {
            printf("Factorial of %d is %d\n", numbers[i], factorial(numbers[i])); // return type
        }
    }
}

// PROGRAM 14 : PRINT FACTORIAL OF 5 NUMBER FROM USER - (END) --------------------->