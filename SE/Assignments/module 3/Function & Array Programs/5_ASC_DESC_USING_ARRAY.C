// PROGRAM 5 : ASCENDING & DESCENDING OREDR USING ARRAY - (START) --------------------->
#include <stdio.h>
void main()
{
    int choice;

    // Display Menu
    printf("1. Ascending Order\n");
    printf("2. Descending Order\n");
    printf("3. Exit\n");

    while (1)
    {
        printf("\nEnter Choice : ");
        scanf("%d", &choice); // Store the choice value

        if (choice == 1)
        {
            // a for array, i,j for iteration, temp forstore the value temporary, n for length of array from user
            int a[10], i, j, temp, n;

            // for accept value of length of array from user
            printf("Enter Length of Array : ");
            scanf("%d", &n);

            // for accept values of array from user
            printf("Enter %d Integers : \n", n);
            for (i = 0; i < n; i++)
            {
                scanf("%d", &a[i]);
            }

            // for Ascending Order
            for (i = 0; i < n; i++)
            {
                for (j = i + 1; j < n; j++)
                {
                    if (a[i] > a[j])
                    {
                        // Swapping value
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
            }
            // Dispay Ascending Order
            printf("Ascending Order\n");
            for (i = 0; i < n; i++)
            {
                printf("%d\n", a[i]);
            }
        }

        else if (choice == 2)
        {
            // a for array, i,j for iteration, temp forstore the value temporary, n for length of array from user
            int a[10], i, j, temp, n;

            // for accept value of length of array from user
            printf("Enter Length of Array : ");
            scanf("%d", &n);

            // for accept values of array from user
            printf("Enter %d Integers : \n", n);
            for (i = 0; i < n; i++)
            {
                scanf("%d", &a[i]);
            }

            // for Descending Order
            for (i = 0; i < n; i++)
            {
                for (j = i + 1; j < n; j++)
                {
                    if (a[i] < a[j])
                    {
                        // Swapping Value
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
            }
            // Dispay Descending Order
            printf("Descending Order\n");
            for (i = 0; i < n; i++)
            {
                printf("%d\n", a[i]);
            }
        }
        else if (choice == 3)
        {
            printf("Thank You.");
            break;
        }
        else
        {
            printf("Enter Valid Choice!");
        }
    }
}
// PROGRAM 5 : ASCENDING & DESCENDING OREDR USING ARRAY - (END) --------------------->