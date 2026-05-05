// PROGRAM 6 : FIND AREA OF TRIANGLE - (START) -------------------->
#include <stdio.h>
void main()
{
    float area, b, h;

    // Get value from user
    printf("Enter the Breadth : ");
    scanf("%f", &b);
    printf("Enter the height : ");
    scanf("%f", &h);

    area = 1 / 2 * b * h; // FORMULA
    printf("Area of Triangle is %.2f", area);
}
// PROGRAM 6 : FIND AREA OF TRIANGLE - (END) <--------------------