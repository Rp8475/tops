// PROGRAM 8(A) : INFORMATION -PRINT AND DISPLAY EMPNO, EMPNAME, ADDRESS AND AGE - (START) --------------------->

#include <stdio.h>

// structure of employee
struct employee // struct is a keyword and structure declaration
{
    int empno, empage;            // empno and empage is a member variabel
    char empname[20], empadd[25]; // empname and empadd for store employee name and address
} emp;                            // emp is a structure variable
main()
{
    // accept details from user
    printf("Enter the employee number=");
    scanf("%d", &emp.empno);

    printf("Enter the employee Name=");
    scanf("%s", &emp.empname);

    printf("Enter the employee Age=");
    scanf("%d", &emp.empage);

    printf("Enter the employee address=");
    scanf("%s", &emp.empadd);

    // desplay information of employee
    printf("\nDisplay employee information...\n ");

    printf("Employee no=%d", emp.empno);

    printf("\nEmployee Name=%s", emp.empname);

    printf("\nEmployee Age=%d", emp.empage);

    printf("\nEmployee Address=%s", emp.empadd);
}

// PROGRAM 8(A) : INFORMATION -PRINT AND DISPLAY EMPNO, EMPNAME, ADDRESS AND AGE - (END) --------------------->