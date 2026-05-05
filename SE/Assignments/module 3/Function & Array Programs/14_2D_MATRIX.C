//  PROGRAM 14 : 2D MATRIX ARREY - (START) --------------------->

#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    // Get the dimensions of the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare a 2D array with the given dimensions
    int matrix[rows][cols];

    // Input elements into the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) // rows
    {
        for (j = 0; j < cols; j++) // column
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the matrix
    printf("\nThe matrix is:\n");
    for (i = 0; i < rows; i++) // rows
    {
        for (j = 0; j < cols; j++) // columns
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//  PROGRAM 14 : 2D MATRIX ARREY - (END) --------------------->