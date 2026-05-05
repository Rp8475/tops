// PROGRAM 20 : ENTER_WEEK_NUMBER_AND_PRINT_WEEK_DAY - (START) --------------------->
#include <stdio.h>
void main()
{
    int weekNumber;

    // GET VALUE FROM USER
    printf("Enter the number of Week : ");
    scanf("%d", &weekNumber);

    // ELSE-IF LADDER CONDITION
    if (weekNumber == 1)
    {
        printf("Monday");
    }
    else if (weekNumber == 2)
    {
        printf("Tuesday");
    }
    else if (weekNumber == 3)
    {
        printf("Wednesday");
    }
    else if (weekNumber == 4)
    {
        printf("Thursday");
    }
    else if (weekNumber == 5)
    {
        printf("Friday");
    }
    else if (weekNumber == 6)
    {
        printf("Saturday");
    }
    else if (weekNumber == 7)
    {
        printf("Sunday");
    }
    else
    {
        printf("Invalid Input! Please enter Week number between 1-7.");
    }
}
// PROGRAM 20 : ENTER_WEEK_NUMBER_AND_PRINT_WEEK_DAY - (END) --------------------->