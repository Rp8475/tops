// PROGRAM 10 : SUMMATION OF 1ST AND LAST DIGIT OF GIVEN NUMBER - (START) --------------------->
#include <stdio.h>

int main()
{
    int num, first_digit, last_digit, temp;

    // Input the number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // last digit
    last_digit = num % 10;

    // Extract the first digit
    temp = num;
    while (temp >= 10)
    {
        temp = temp / 10;
    }
    first_digit = temp;

    // summation of first and last digit
    int sum = first_digit + last_digit;

    // Output
    printf("Result: %d\n", sum);

    return 0;
}
// PROGRAM 10 : SUMMATION OF 1ST AND LAST DIGIT OF GIVEN NUMBER - (END) --------------------->