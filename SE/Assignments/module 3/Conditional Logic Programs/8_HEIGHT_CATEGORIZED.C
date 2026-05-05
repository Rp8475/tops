// PROGRAM 8 : HEIGHT OF PERSON IN CENTIMETER & CATEGORIZED THE PERSON - (START) --------------------->
#include <stdio.h>
void main()
{
    float height;

    // GET VALUE FROM USER
    printf("Enter the Height in Centimeter : ");
    scanf("%f", &height);

    // ELSE-IF LADDER CONDITION WITH AND(&&) OPERATOR
    if (height < 150.0)
    {
        printf("drawf.");
    }
    else if (height >= 150.0 && height <= 165.0)
    {
        printf("Avarage Height.");
    }
    else if (height > 165.0 && height <= 195.0)
    {
        printf("Tall.");
    }
    else
    {
        printf("Abnormal!!");
    }
}
// PROGRAM 8 : HEIGHT OF PERSON IN CENTIMETER & CATEGORIZED THE PERSON - (END) --------------------->
