//  PROGRAM 13 : USER ENTERD 5 NUMBER IS EVEN OR ODD FIND IN STRING - (START) --------------------->

#include <stdio.h>
int main()
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

    // Check each number and display whether it's even or odd
    printf("\nThe numbers and their parity are:\n");
    for (i = 0; i < 5; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            printf("Number %d is even.\n", numbers[i]);
        }
        else
        {
            printf("Number %d is odd.\n", numbers[i]);
        }
    }
    return 0;
}

//  PROGRAM 13 : USER ENTERD 5 NUMBER IS EVEN OR ODD FIND IN STRING - (END) --------------------->