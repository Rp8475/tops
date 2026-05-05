// PROGRAM 7 : FIND AREA OF RECTANGLE - (START) -------------------->
#include <stdio.h>
void main()
{
    // data member
    float area, w, l;

    // Get value from user
    printf("Enter the Width : ");
    scanf("%f", &w);
    printf("Enter the Length : ");
    scanf("%f", &l);

    area = w * l; // FORMULA
    printf("Area of Rectangle is %.2f", area);
}
// PROGRAM 7 : FIND AREA OF RECTANGLE - (END) <--------------------