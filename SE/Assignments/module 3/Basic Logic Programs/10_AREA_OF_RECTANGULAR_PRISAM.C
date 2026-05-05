// PROGRAM 10 : FIND AREA OF RECTANGULAR PRISAM - (START) -------------------->
#include <stdio.h>
void main()
{
    // Data member
    float area, w, l, h;

    printf("Enter the Length : ");
    scanf("%f", &l);
    printf("Enter the Width : ");
    scanf("%f", &w);
    printf("Enter the height : ");
    scanf("%f", &h);

    area = 2 * (w * l + h * l + h * w); // FORMULA
    printf("Area of Rectangular Prisam is %.2f", area);
}
// PROGRAM 10 : FIND AREA OF RECTANGULAR PRISAM - (END) <--------------------