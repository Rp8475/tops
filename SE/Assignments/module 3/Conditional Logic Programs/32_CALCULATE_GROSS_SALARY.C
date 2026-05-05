// PROGRAM 32 : CALCULATE GROSS SALARY - (START) --------------------->
#include <stdio.h>
void main()
{
    float b_salary, g_salary, hra, da;

    // GET VALUE FROM USER
    printf("Enter the Basic Salary of an Employee : ");
    scanf("%f", &b_salary);

    // Determine HRA and DA based on the basic salary    if (b_salary <= 10000)
    {
        hra = b_salary * 0.20;
        da = b_salary * 0.80;
    }
    else if (b_salary > 10000 && b_salary <= 20000)
    {
        hra = b_salary * 0.25;
        da = b_salary * 0.90;
    }
    else
    {
        hra = b_salary * 0.30;
        da = b_salary * 0.95;
    }

    g_salary = b_salary + hra + da; // GROSS SALARY FORMULA

    printf("Gross Salary of an Employee = %.2f", g_salary); // PRINT GROSS SALARY
}
// PROGRAM 32 : CALCULATE GROSS SALARY - (END) --------------------->