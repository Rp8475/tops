// PROGRAM 2 : CALCULATOR USING SWITCH CASE - (START) --------------------->
#include <stdio.h>
void main()
{
    int num1, num2, choice;
    float result;

    // Menu
    printf("<--- Simple Calculator --->\n");
    printf("1. Addition\n");
    printf("2. Substraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    while (1)
    {
        // Get choice from user
        printf("\n\nEnter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter two numbers : ");
            scanf("%d %d", &num1, &num2);
            result = num1 + num2; // addition
            printf("%d + %d = %.2f", num1, num2, result);
            break;
        case 2:
            printf("\nEnter two numbers : ");
            scanf("%d", &num1, &num2);
            result = num1 - num2; // Substraction
            printf("%d - %d = %.2f", num1, num2, result);
            break;
        case 3:
            printf("\nEnter two numbers : ");
            scanf("%d %d", &num1, &num2);
            result = num1 * num2; // Multiplication
            printf("%d * %d = %.2f", num1, num2, result);
            break;
        case 4:
            printf("\nEnter two numbers : ");
            scanf("%d %d", &num1, &num2);
            if (num2 == 0)
            {
                printf("\nError! Division by zero is not allowed.\n");
            }
            else
            {
                result = num1 / num2; // Division
                printf("%d / %d = %.2f", num1, num2, result);
            }
            break;

        default:
            printf("\nInvalid Choice! Please Enter valid choice.");
            break;
        }
    }
}
// PROGRAM 2 : CALCULATOR USING SWITCH CASE0 - (END) --------------------->