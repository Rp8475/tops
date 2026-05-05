// PROGRAM 9 : FIND MAXIMUM CHARACTER IN STRING - (START) --------------------->

#include <stdio.h>
#define no 256 // Define a constant for the number of possible ASCII characters

int main()
{
    char a[200];
    int c[no], i = 0, max, ascii;

    printf("Find maximum character in a string :\n");
    printf("\n");
    printf("Input the string : ");
    gets(a);

    // Initialize the count array with zeros
    for (i = 0; i < no; i++)
    {
        c[i] = 0;
    }

    // Count occurrences of each character
    i = 0;
    while (a[i] != '\0')
    {
        ascii = (int)a[i]; // Get ASCII value of the character
        c[ascii] += 1;     // Increment the count for this character
        i++;
    }

    // Find the character with the highest frequency
    max = 0;
    for (i = 0; i < no; i++)
    {
        // Skip space character (ASCII 32)
        if (i != 32)
        {
            if (c[i] > c[max])
            {
                max = i; // Update max to the current character with higher frequency
            }
        }
    }

    printf("The Highest frequency of character '%c' appears number of times : %d \n\n", max, c[max]);
}

// PROGRAM 9 : FIND MAXIMUM CHARACTER IN STRING - (END) --------------------->