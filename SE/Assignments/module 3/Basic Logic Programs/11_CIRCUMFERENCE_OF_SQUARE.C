// PROGRAM 11 : FIND CIRCUMFERENCE OF SQUARE - (START) -------------------->
#include <stdio.h>
void main()
{
    // data member
    float circumference, a;

    // get value from user
    printf("Enter the Side : ");
    scanf("%f", &a);

    circumference = 4 * a; // FORMULA
    printf("circumference of Square is %.2f", circumference);
}
// PROGRAM 11 : FIND CIRCUMFERENCE OF SQUARE - (END) <--------------------