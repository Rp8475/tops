// PROGRAM 11 : ODD_EVEN_USING_TERNARY_OPERATOR (START) --------------------->
#include <stdio.h>
void main()
{
    int number;

    // GET VALUE FROM USER
    printf("Enter the Integer number : ");
    scanf("%d", &number);

    // TERNARY OPERATOR
    (number % 2 == 0) ? printf("%d is Even number.", number) : printf("%d is Odd number.", number);
}
// PROGRAM 11 : ODD_EVEN_USING_TERNARY_OPERATOR (END) --------------------->
