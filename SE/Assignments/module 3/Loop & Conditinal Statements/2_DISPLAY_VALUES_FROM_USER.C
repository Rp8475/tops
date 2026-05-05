// PROGRAM 2 : DISPLAY VALUES FROM THE USER - (START) --------------------->
#include <stdio.h>
int main()
{
    int numbers[5]; // Array to store 5 numbers
    int i;

    // Prompt user to enter 5 numbers
    printf("Enter 5 numbers:\n");

    // Loop to input 5 numbers
    for (i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Displaying the numbers entered by the user
    printf("\nNumbers entered by you are:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", numbers[i]);
    }
}
// PROGRAM 2 : DISPLAY VALUES FROM THE USER - (END) --------------------->