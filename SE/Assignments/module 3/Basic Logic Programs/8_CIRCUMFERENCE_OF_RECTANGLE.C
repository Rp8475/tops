// PROGRAM 8 : FIND CIRCUMFERENCE OF RECTANGLE - (START) -------------------->
#include <stdio.h>
void main()
{
    // data member
    float circumference, w, l;

    //  Get value from user
    printf("Enter the Width : ");
    scanf("%f", &w);
    printf("Enter the Length : ");
    scanf("%f", &l);

    circumference = 2 * (w + l); // FORMULA
    printf("Circumference of Rectangle is %.2f", circumference);
}
// PROGRAM 8 : FIND CIRCUMFERENCE OF RECTANGLE - (END) <--------------------