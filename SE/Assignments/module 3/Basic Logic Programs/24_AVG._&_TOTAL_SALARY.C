// PROGRAM 24 : AVARAGE & TOTAL SALARY  - (START) -------------------->
#include<stdio.h>
void main(){
    int i, eSalary, avg, sum=0;
    char eName;

    for(i=0 ; i<5 ; i++){
        printf("Employee Name : ");
        scanf("%s", &eName);
        printf("Employee Salary : ");
        scanf("%d", &eSalary);
        
        // SUM OF ALL EMPLOYEE'S SALARY
        sum = sum + eSalary;
    }
    printf("\n");

    // PRINT TOTAL SALARY OF ALL EMPLOYEE
	printf("\nToatl Salary of all Employee is : %d", sum);
	
	// AVARGE SALARY
    avg = sum/5;
    printf("\nAvarage Salary of all Employee is : %d", avg);
}
// PROGRAM 24 : AVARAGE & TOTAL SALARY  - (END) -------------------->