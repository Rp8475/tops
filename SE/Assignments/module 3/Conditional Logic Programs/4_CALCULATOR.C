#include <stdio.h>
void main()
{
    int n1, n2, ans;
    char operator;

    printf("Enter the 1st number : ");
    scanf("%d", &n1);
    printf("Enter the 1st number : ");
    scanf("%d", &n2);
    printf("Enter the Mathematical Operator : ");
    scanf("%ch", &operator);

    if (operator= '+')
    {
        ans = n1 + n2; // Addition
    }
    else if (operator= '-')
    {
        ans = n1 - n2; // Substraction
    }
    else if (operator= '*')
    {
        ans = n1 * n2; // Multiplication
    }
    else if (operator= '/')
    {
        ans = n1 / n2; // Division
    }
    else if (operator= '%')
    {
        ans = n1 % n2; // Modulo
    }
    else if (operator= '^')
    {
        ans = n1 ^ n2; // Power
    }

    printf("%d  %c  %d = %d", n1, operator, n2, ans);
}