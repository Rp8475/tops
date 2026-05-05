// PROGRAM 10 : SUMMATION OF GIVEN NUMBER - (START) --------------------->#include <stdio.h>

int main()
{
    int num, sum = 0;

    // Input the number from the user
    printf("Enter an integer : ");
    scanf("%d", &num);

    // Compute the sum of the digits
    while (num > 0)
    {
        sum = sum + num % 10; // Add the last digit to the sum
        num = num / 10;       // Remove the last digit
    }

    // Output summation of given number
    printf("Result: %d\n", sum);

    return 0;
}
// PROGRAM 10 : SUMMATION OF GIVEN NUMBER - (END) --------------------->#include <stdio.h>