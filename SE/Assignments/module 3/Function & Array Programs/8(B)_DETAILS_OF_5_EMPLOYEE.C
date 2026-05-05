//  PROGRAM 8(B) : STRUCTURE FOR FIVE EMPLOYEE THAT PROVIDES THE FOLLOWING INFORMATION -PRINT AND DISPLAY EMPNO, EMPNAME, ADDRESS ANDAGE - (START) --------------------->

#include <stdio.h>
#include <string.h>

// Define the structure for Employee
struct Employee
{
    int empno;         // Employee number
    char empname[50];  // Employee name
    char address[100]; // Employee address
    int age;           // Employee age
};

int main()
{
    struct Employee employees[5]; // Array to store information of 5 employees
    int i;

    // Input details for 5 employees
    printf("Enter details for 5 employees:\n");
    for (i = 0; i < 5; i++)
    {
        printf("\nEmployee %d:\n", i + 1);
        printf("Enter employee number: ");
        scanf("%d", &employees[i].empno);
        getchar(); // Consume newline character left by scanf

        printf("Enter employee name: ");
        fgets(employees[i].empname, sizeof(employees[i].empname), stdin);
        // Remove trailing newline character if present
        employees[i].empname[strcspn(employees[i].empname, "\n")] = '\0';

        printf("Enter employee address: ");
        fgets(employees[i].address, sizeof(employees[i].address), stdin);
        // Remove trailing newline character if present
        employees[i].address[strcspn(employees[i].address, "\n")] = '\0';

        printf("Enter employee age: ");
        scanf("%d", &employees[i].age);
        getchar(); // Consume newline character left by scanf
    }

    // Display details of 5 employees
    printf("\nEmployee Details:\n");
    for (i = 0; i < 5; i++)
    {
        printf("\nEmployee %d:\n", i + 1);
        printf("Employee Number: %d\n", employees[i].empno);
        printf("Employee Name: %s\n", employees[i].empname);
        printf("Employee Address: %s\n", employees[i].address);
        printf("Employee Age: %d\n", employees[i].age);
    }

    return 0;
}

//  PROGRAM 8(B) : STRUCTURE FOR FIVE EMPLOYEE THAT PROVIDES THE FOLLOWING INFORMATION -PRINT AND DISPLAY EMPNO, EMPNAME, ADDRESS ANDAGE - (END) --------------------->