// PROGRAM 28 : PRINT SERIES - (START) --------------------->
// 1 2 3 6 9 18 27 54...

// WORK :
//   1  (Initial value)
//   2  (1 * 2)
//   3  (2 * 1.5)
//   6  (3 * 2)
//   9  (6 * 1.5)
//   18 (9 * 2)
//   27 (18 * 1.5)
//   54 (27 * 2)

#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the number of terms to display: ");
    scanf("%d", &n);

    // Initial terms
    int term1 = 1, term2 = 2;
    int currentTerm = term1;

    // Display the first term
    printf("%d ", currentTerm);

    for (i = 1; i < n; ++i)
    {
        // Calculate next term based on the pattern
        if (i % 2 == 1)
        {
            // For odd index terms (1, 3, 5, ...), multiply by 1.5
            currentTerm = currentTerm * 1.5;
        }
        else
        {
            // For even index terms (2, 4, 6, ...), multiply by 2
            currentTerm = currentTerm * 2;
        }
        printf("%d ", (int)currentTerm);
    }

    printf("\n");
    return 0;
}
// PROGRAM 28 : PRINT SERIES - (END) --------------------->