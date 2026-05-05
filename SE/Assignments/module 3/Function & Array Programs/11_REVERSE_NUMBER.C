//  PROGRAM 11 : REVERSE ORDER IN STRING - (START) --------------------->

#include <stdio.h>
main()
{
    int numbers[5]; // Array to store the numbers
    int i;

    // Accept 5 numbers from the user
    printf("Enter %d numbers:\n", 5);
    for (i = 0; i < 5; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Display the numbers in reverse order
    printf("\nThe numbers in reverse order are:\n");
    for (i = 5 - 1; i >= 0; i--)
    {
        printf("%d\n", numbers[i]);
    }
}

//  PROGRAM 11 : REVERSE ORDER IN STRING - (END) --------------------->