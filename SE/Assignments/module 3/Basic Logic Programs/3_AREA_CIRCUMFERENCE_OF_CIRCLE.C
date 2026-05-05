// PROGRAM 3 : FIND AREA & CIRCUMFERENCE OF CIRCLE - (START) -------------------->
#include <stdio.h>
void main()
{
    I // Data member
        float PI = 3.14,
              radius, area, circumference;

    // Get value from user
    printf("Enter the Radius : ");
    scanf("%f", &radius);

    area = PI * radius * radius;     // FORMULA
    circumference = 2 * PI * radius; // FORMULA

    // Print Output
    printf("\nArea of Circle is %.2f", area);
    printf("\nCircumference of Circle is %.2f", circumference);
}
// PROGRAM 3 : FIND AREA & CIRCUMFERENCE OF CIRCLE - (END) <--------------------