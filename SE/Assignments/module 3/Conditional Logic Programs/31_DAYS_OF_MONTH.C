// PROGRAM 19 : ENTER_MONTH_NUMBER_AND_DISPLAY_NUMBER_OF_DAYS - (START) --------------------->
#include <stdio.h>
void main()
{
    int monthNumber;

    printf("Enter the number of Month : ");
    scanf("%d", &monthNumber);

    // ELSE-IF LADDER CONDITION WITH OR(||) OPERATOR
    if (monthNumber == 1 || monthNumber == 3 || monthNumber == 5 || monthNumber == 7 || monthNumber == 8 || monthNumber == 10 || monthNumber == 12)
    {
        printf("31 Days...");
    }
    else if (monthNumber == 4 || monthNumber == 6 || monthNumber == 9 || monthNumber == 11)
    {
        printf("30 Days...");
    }
    else if (monthNumber == 2)
    {
        printf("28/29 Dyas");
    }
    else
    {
        printf("Invalid Input! Please enter Month number between 1-12.");
    }
}
// PROGRAM 19 : ENTER_MONTH_NUMBER_AND_DISPLAY_NUMBER_OF_DAYS - (END) --------------------->

// #include<stdio.h>
// void main(){
//     int monthNumber, days;

//     printf("Enter the number of Month : ");
//     scanf("%d", &monthNumber);

//     if(monthNumber == 1 || monthNumber == 3 || monthNumber == 5 || monthNumber == 7 || monthNumber == 8 || monthNumber == 10 || monthNumber == 12){
//         days = 31;
//     }
//     else if(monthNumber == 4 || monthNumber == 6 || monthNumber == 9 || monthNumber == 11 ){
//         days = 30;
//     }
//     else if (monthNumber == 2)
//     {
//         days = 28/29;
//     }
//     else{
//         printf("Invalid Input! Please enter Month number between 1-12.");
//     }
//     printf("Days : %d", days);

// }