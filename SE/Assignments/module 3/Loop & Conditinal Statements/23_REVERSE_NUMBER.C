// PROGRAM 23 : Reverse Number- (START) --------------------->
#include <stdio.h>
int main()
{
    // temp : temporary variable
    // rem : remainder
    // rev : reverse
    int num, temp, rem, rev = 0;
    printf("enter a number : ");
    scanf("%d", &num);
    temp = num;

    while (temp > 0)
    {
        rem = temp % 10;      // last digit of num
        rev = rev * 10 + rem; // to reverse number
        temp = temp / 10;     // to move next digit
    }
    printf("reversed number is = %d", rev);
}
// PROGRAM 23 : Reverse Number- (END) --------------------->