// PROGRAM 19 TO 29 : CALCULATE_AND_PRINT_ELECTRICITY_BILL (START) --------------------->
#include <stdio.h>
void main()
{
    int custId;
    char custName[10];
    float unit, unitCost, amount;

    // GET VALUE FROM USER
    printf("Enter the Customer Name : ");
    scanf("%s", &custName);
    printf("Enter the Customer ID : ");
    scanf("%d", &custId);
    printf("Enter the Unit consumed by the Customer : ");
    scanf("%f", &unit);

    // Determine the unit cost based on units consumed      if (unit < 350)
    {
        unitCost = 1.20;
    }
    else if (unit >= 350 && unit < 600)
    {
        unitCost = 1.50;
    }
    else if (unit >= 600 && unit < 800)
    {
        unitCost = 1.80;
    }
    else
    {
        unitCost = 2.00;
    }

    amount = unit * unitCost; // TOTAL BILL FORMULA
    printf("per Unit Rate : %.2f", unitCost);
    printf("\nTotal amount to be paid is : %.2f", amount); // DISPLAY THE TOTAL AMOUNT OF BILL
}
// PROGRAM 19 TO 29 : CALCULATE_AND_PRINT_ELECTRICITY_BILL (END) --------------------->