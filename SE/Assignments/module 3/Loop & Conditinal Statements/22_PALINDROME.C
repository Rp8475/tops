// PROGRAM 22 : PALINDROME NUMBER - (START) --------------------->
#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num)
{
    int original = num, reversed = 0, remainder;

    // Reverse the number
    while (num != 0)
    {
        remainder = num % 10;                 // last digit of num
        reversed = reversed * 10 + remainder; // for reverse order formula
        num /= 10;                            // for the next digit
    }

    // Check if the original number and reversed number are the same
    return (original == reversed);
}

int main()
{
    int numbers[3];
    int i = 0;

    // Read 3 numbers from the user
    while (i < 3)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        i++;
    }

    // Check each number and print whether it's a palindrome
    for (i = 0; i < 3; i++)
    {
        if (isPalindrome(numbers[i]))
        {
            printf("%d is a palindrome.\n", numbers[i]);
        }
        else
        {
            printf("%d is not a palindrome.\n", numbers[i]);
        }
    }

    return 0;
}
// PROGRAM 22 : PALINDROME NUMBER - (END) --------------------->