// PROGRAM 7 : ACCEPT MARKS FROM USER AND CHECK PASS OF FAIL - (START) --------------------->
#include <stdio.h>
void main()
{
    int n;

    // GET VALUE FROM USER
    printf("Enter Marks : ");
    scanf("%d", &n)

        // ELSE-IF LADDER CONDITION WITH AND(&&) OPERATOR
        if (n >= 33 && n < 100)
    {
        printf("Student is PASS...");
    }
    else if (n > 100)
    {
        printf("Undefined...")
    }
    else
    {
        printf("Student is Falied...")
    }
}
// PROGRAM 7 : ACCEPT MARKS FROM USER AND CHECK PASS OF FAIL - (END) --------------------->