// PROGRAM 9 : FIND CIRCUMFERENCE OF TRIANGLE - (START) -------------------->
#include <stdio.h>
void main()
{
    // data member
    float circumference, a, b, c;

    printf("Enter the a : ");
    scanf("%f", &a);
    printf("Enter the b : ");
    scanf("%f", &b);
    printf("Enter the c : ");
    scanf("%f", &c);

    circumference = a + b + c; // FORMULA
    printf("Circumference of Triangle is %.2f", circumference);
}
// PROGRAM 9 : FIND CIRCUMFERENCE OF TRIANGLE - (END) <--------------------