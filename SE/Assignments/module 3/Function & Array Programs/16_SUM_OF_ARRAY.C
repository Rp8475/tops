//  PROGRAM 16 : SUM OF FIVE NUMBER IN STRING - (START) --------------------->

#include <stdio.h>

int main()
{
    int numbers[5]; // Array to store the numbers
    int i;
    int sum = 0; // Variable to store the sum

    // Accept 5 numbers from the user
    printf("Enter %d numbers:\n", 5);
    for (i = 0; i < 5; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Calculate the sum of the numbers
    for (i = 0; i < 5; i++)
    {
        sum += numbers[i];
    }

    // Display the sum
    printf("\nThe sum of the numbers is: %d\n", sum);
}

//  PROGRAM 16 : SUM OF FIVE NUMBER IN STRING - (END) --------------------->