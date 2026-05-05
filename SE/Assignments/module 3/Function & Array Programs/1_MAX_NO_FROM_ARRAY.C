// PROGRAM 1 : MAX NUMBER FROM ARRAY - (START) --------------------->
#include <stdio.h>

max(int arr[], int n)
{
    int i;
    int max = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i]; // Update max if a larger element is found
        }
    }
    return max; // Return the maximum value found
}

void main()
{
    int arr[] = {684, 654, 646, 648, 1849, 964};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    printf("Largest in given array is %d", max(arr, n));
    return 0;
}
// PROGRAM 1 : MAX NUMBER FROM ARRAY - (END) --------------------->