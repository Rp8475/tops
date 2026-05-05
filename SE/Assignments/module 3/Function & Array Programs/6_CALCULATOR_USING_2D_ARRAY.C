// PROGRAM 6 : CALCULATOR USING 2D ARRAY - (START) --------------------->
#include <stdio.h>

main()
{
    int a[2][2], b[2][2], i, j;

    // Get value of array a[][] from user
    for (i = 0; i < 2; i++) // row
    {
        for (j = 0; j < 2; j++) // column
        {
            printf("enter number : ");
            scanf("%d", &a[i][j]);
        }
    }

    // print array of a[][]
    for (i = 0; i < 2; i++) // row
    {
        for (j = 0; j < 2; j++) // column
        {
            printf("\n [%d] [%d] : %d ", i, j, a[i][j]);
        }
    }

    printf("\n**\n");

    // Get value of array b[][] from user
    for (i = 0; i < 2; i++) // row
    {
        for (j = 0; j < 2; j++) // column
        {
            printf("enter number : ");
            scanf("%d", &b[i][j]);
        }
    }

    // Print the value of array b[][]
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\n [%d] [%d] : %d ", i, j, b[i][j]);
        }
    }

    printf("\n**\n");

    printf("addition\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\n [%d] [%d] : %d ", i, j, a[i][j] + b[i][j]); // Addition
        }
    }

    printf("\n**\n");

    printf("subtraction\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\n [%d] [%d] : %d ", i, j, a[i][j] - b[i][j]); // Substraction
        }
    }

    printf("\n**\n");

    printf("multiplication\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\n [%d] [%d] : %d ", i, j, a[i][j] * b[i][j]); // Multiplication
        }
    }

    printf("\n**\n");

    printf("division\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\n [%d] [%d] : %d ", i, j, a[i][j] / b[i][j]); // Division
        }
    }
}
// PROGRAM 6 : CALCULATOR USING 2D ARRAY - (END) --------------------->