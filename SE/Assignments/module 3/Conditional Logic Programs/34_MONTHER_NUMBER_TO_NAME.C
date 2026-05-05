// PROGRAM 21 : ENTER_MONTH_NUMBER_AND_PRINT_MONTH_NAME - (START) --------------------->
#include <stdio.h>
void main()
{
    int monthNumber;

    // GET VALUE FROM USER
    printf("Enter the number of Week : ");
    scanf("%d", &monthNumber);

    // ELSE-IF LADDER CONDITION
    if (monthNumber == 1)
    {
        printf("January");
    }
    else if (monthNumber == 2)
    {
        printf("February");
    }
    else if (monthNumber == 3)
    {
        printf("March");
    }
    else if (monthNumber == 4)
    {
        printf("April");
    }
    else if (monthNumber == 5)
    {
        printf("May");
    }
    else if (monthNumber == 6)
    {
        printf("June");
    }
    else if (monthNumber == 7)
    {
        printf("July");
    }
    else if (monthNumber == 8)
    {
        printf("August");
    }
    else if (monthNumber == 9)
    {
        printf("September");
    }
    else if (monthNumber == 10)
    {
        printf("October");
    }
    else if (monthNumber == 11)
    {
        printf("November");
    }
    else if (monthNumber == 12)
    {
        printf("December");
    }
    else
    {
        printf("Invalid Input! Please enter month number between 1-12.");
    }
}
// PROGRAM 21 : ENTER_MONTH_NUMBER_AND_PRINT_MONTH_NAME - (END) --------------------->