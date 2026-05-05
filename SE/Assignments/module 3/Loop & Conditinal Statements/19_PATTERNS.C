// PROGRAM 19 : PATTERNS - (START) --------------------->

// A
// A B
// A B C
// A B C D
// A B C D E
#include <stdio.h>
void main()
{
    int i, j;

    for (i = 0; i < 5; i++)
    { // ROW
        for (j = 0; j <= i; j++)
        { // COLUMN
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
}

// A
// B C
// D E F
// G H I J
// K L M N O
#include <stdio.h>
void main()
{
    int n = 65, i, j;

    for (i = 1; i <= 5; i++)
    { // ROW
        for (j = 1; j <= i; j++)
        { // COLUMN
            printf("%c ", n);
            n++;
        }
        printf("\n");
    }
}

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
#include <stdio.h>
void main()
{
    int n = 1, i, j;

    for (i = 1; i <= 5; i++)
    { // ROW
        for (j = 1; j <= i; j++)
        { // COLUMN
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }
}

// 1
// 1 0
// 1 0 1
// 1 0 1 0
// 1 0 1 0 1
#include <stdio.h>
void main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    { // ROW
        for (j = 1; j <= i; j++)
        { // COLUMN
            printf(" %d", j % 2);
        }
        printf("\n");
    }
}

//           *
//         * * *
//       * * * * *
//     * * * * * * *
//   * * * * * * * * *
#include <stdio.h>
void main()
{
    int i, j, k;

    for (i = 0; i < 5; i++)
    { // ROW
        for (k = 0; k < 2 * (5 - i) - 1; k++)
        { // FOR SPACING
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++)
        { // COLUMN
            printf(" *");
        }
        printf("\n");
    }
}

// *
// * *
// * * *
// * * * *
// * * * * *
// * * * *
// * * *
// * *
// *
#include <stdio.h>

void main()
{

    int i, j;

    for (i = 1; i <= 5; i++)
    { // ROW
        for (j = 0; j < i; j++)
        { // COLUMN
            printf(" *");
        }
        printf("\n");
    }

    for (i = 1; i <= 5 - 1; i++)
    {
        for (j = 0; j < 5 - i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
}
// PROGRAM 19 : PATTERNS - (END) --------------------->