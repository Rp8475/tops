// PROGRAM 12 : ARMSTRONG NUMBER USING FOR & WHILE LOOP - (START) --------------------->

#include <stdio.h>
void main()
{
    int n, remainder, arm = 0, c;

    // get input from user
    printf("Enter number : ");
    scanf("%d", &n);

    // c is used for duplicate value of n
    c = n;

    // ARMSTRONG : EX. 153 --> 1*1*1 + 5*5*5 + 3*3*3 = 153
    // USING WHILE LOOP
    while (n > 0)
    {
        remainder = n % 10;                              // Last digit of n
        arm = (remainder * remainder * remainder) + arm; // armstrong formula
        n = n / 10;                                      // to move next digit
    }
    if (c == arm)
    {
        printf("%d is Armstrong number.", c);
    }
    else
    {
        printf("%d is not Armstrong number.", c);
    }
}

// PROGRAM 12 : ARMSTRONG NUMBER USING FOR & WHILE LOOP - (START) --------------------->