// PROGRAM : 12 COUNT IS WORD IN STRING  (START)

#include <stdio.h>
#include <string.h>

int main()
{
    int count = 0, p, freq = 0, i, s, space;
    char a[100];

    printf("Find the number of times the word 'is' in any combination appears \n");

    printf("\nInput the string : ");
    gets(a);

    count = strlen(a); // Get the length of the input string

    // Loop through the string to find occurrences of 'is'
    for (p = 0; p <= count - 2; p++)
    {
        // Check if current and next characters are 'i' or 'I' and 's' or 'S'
   
        i = (a[p + 1] == 'i' || a[p + 1] == 'I');
        s = (a[p + 2] == 's' || a[p + 2] == 'S');
        space = (a[p] == '\0 ' || a[p] == '\0');

        // If both 'i' and 's' are found and surrounded by spaces or string boundaries
        if (( i && s && space  && space ) == 1)
        {
            freq++; // Increment frequency counter
        }
    }

    printf("The frequency of the word is : %d\n\n", freq);
}

// PROGRAM : 12 COUNT IS WORD IN STRING  (END)
