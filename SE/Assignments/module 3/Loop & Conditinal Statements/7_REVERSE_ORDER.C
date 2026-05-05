// PROGRAM 7 : PRINT NUMBER IN REVERSE ORDER - (START) --------------------->
#include <stdio.h>
void main()
{
    int num, reverse = 0, remainder;

    printf("Enter Number : ");
    scanf("%d", &num);

    while (num != 0)
    {
        remainder = num % 10;               // LAST DIGIT OF NUM
        reverse = reverse * 10 + remainder; // GENERATE A NUM FROM REVERSE WITH REMAINDER AS LAST DIGIT
        num = num / 10;
    }
    printf("Reversed Number : %d", reverse);
}
// PROGRAM 7 : PRINT NUMBER IN REVERSE ORDER - (END) --------------------->