// PROGRAM 20 : DISPLAY REMAINED SALARY  - (START) -------------------->
#include<stdio.h>
void main(){
    int salary, dSalary, mSalary;
    float iPreminum = 0.10, lInstallment = 0.10;
    char a='%';

    printf("Enter Monthly salary : ");
    scanf("%d", &salary);
    
    printf("Deduct 10%c Insurance Premium from Salary\n", a);
    printf("Deduct 10%c loan Installment from Salary\n", a);

    dSalary = salary * (iPreminum + lInstallment);
    mSalary = salary - dSalary;

    printf("Remained Salary of user after deducted by Insurance Premium & Loan Installment is %d", mSalary);
}
// PROGRAM 20 : DISPLAY REMAINED SALARY  - (END) -------------------->