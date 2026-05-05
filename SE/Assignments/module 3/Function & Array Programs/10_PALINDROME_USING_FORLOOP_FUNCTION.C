//  PROGRAM 10 : PALINDROME PROGRAM USING FOR LOOP FUNCTION - (START) --------------------->

#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num)
{
    int original = num; // Store the original number
    int reversed = 0;   // Variable to store the reversed number
    int remainder;

    // Reverse the number using a while loop
    for (; num != 0; num /= 10)
    {
        remainder = num % 10;                 // Get the last digit
        reversed = reversed * 10 + remainder; // Build the reversed number
    }

    // Check if the reversed number is the same as the original
    if (reversed == original)
    {
        return 1; // True, it's a palindrome
    }
    else
    {
        return 0; // False, it's not a palindrome
    }
}

int main()
{
    int num;

    // Get the number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is a palindrome
    if (isPalindrome(num))
    {
        printf("%d is a palindrome.\n", num);
    }
    else
    {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}
//  PROGRAM 10 : PALINDROME PROGRAM USING FOR LOOP FUNCTION - (END) --------------------->
