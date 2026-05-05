//  PROGRAM 15 : FIVE NUMBER SHORT IN ACCENDING ODDER - (START) --------------------->

#include <stdio.h>

// Function to perform Bubble Sort
void bubbleSort(int a[], int size)
{
    int i, j, temp;

    // Traverse through all elements in the array
    for (i = 0; i < size - 1; i++)
    {
        // Traverse the array from 0 to size-i-1
        for (j = 0; j < size - i - 1; j++)
        {
            // Swap if the element found is greater than the next element
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int numbers[5];
    int i;

    // Accept 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Sort the array in ascending order
    bubbleSort(numbers, 5);

    // Display the sorted array
    printf("\nThe numbers in ascending order are:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}

//  PROGRAM 15 : FIVE NUMBER SHORT IN ACCENDING ODDER - (END) --------------------->