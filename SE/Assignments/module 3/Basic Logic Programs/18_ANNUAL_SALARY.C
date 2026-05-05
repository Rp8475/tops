// PROGRAM 18 : PERSON'S ANNUAL SALARY  - (START) -------------------->
#include <stdio.h>

int main() {
    float monthlySalary, annualSalary;

    // Input monthly salary from user
    printf("Enter your monthly salary: ");
    scanf("%f", &monthlySalary);

    // Calculate annual salary
    annualSalary = monthlySalary * 12;

    // Display the annual salary
    printf("Your annual salary is: %.2f\n", annualSalary);

    return 0;
}
// PROGRAM 18 : PERSON'S ANNUAL SALARY  - (END) -------------------->