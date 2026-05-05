#include <stdio.h>
int bill = 0;
menu()
{
    printf("---------Menu---------\n");
    printf("\n1. Pizza     Price = 180rs/pcs");
    printf("\n2. Burger    Price = 100rs/pcs");
    printf("\n3. Dosa      Price = 120rs/pcs");
    printf("\n4. Idali     Price = 50rs/pcs");
}

pizza_info()
{
    int qty, amount, price = 180;
    printf("\nYou have selected Pizza.");
    printf("\nEnter the Quantity : ");
    scanf("%d", &qty);
    amount = price * qty;
    printf("Amount : %d", amount);
    bill = amount + bill;
    // printf("\nTotal Bill is = %d", bill);
}

burger_info()
{
    int qty, amount, price = 100;
    printf("\nYou have selected Burger.");
    printf("\nEnter the Quantity : ");
    scanf("%d", &qty);
    amount = price * qty;
    printf("Amount : %d", amount);
    bill = amount + bill;
    // printf("\nTotal Bill is = %d", bill);
}

dosa_info()
{
    int qty, amount, price = 120;
    printf("\nYou have selected Dosa.");
    printf("\nEnter the Quantity : ");
    scanf("%d", &qty);
    amount = price * qty;
    printf("Amount : %d", amount);
    bill = amount + bill;
    // printf("\nTotal Bill is = %d", bill);
}

idali_info()
{
    int qty, amount, price = 50;
    printf("\nYou have selected Idali.");
    printf("\nEnter the Quantity : ");
    scanf("%d", &qty);
    amount = price * qty;
    printf("Amount : %d", amount);
    bill = amount + bill;
    // printf("\nTotal Bill is = %d", bill);
}

void main()
{
    int choice, order;
    while (1)
    {
        printf("Welcome to Rana Fast Food\n\n");
        menu();

        printf("\n\nPlease Enter Your Choice... : ");
        scanf("%d", &choice);

        if (choice == 1)
        {

            pizza_info();
            // more_order();
        }

        else if (choice == 2)
        {
            burger_info();
            //  more_order();
        }

        else if (choice == 3)
        {
            dosa_info();
            // more_order();
        }

        else if (choice == 4)
        {
            idali_info();
            // more_order();
        }

        else
        {
            printf("Invalid choice!!");
        }

        fflush(stdin);
        char choic1;
        printf("\n\nDo you want to continue press y for yes and n for no : ");
        scanf("%c", &choic1);

        if (choic1 == 'n' || choic1 == 'N')
        {
            // bill = amount + bill;
            printf("\nTotal Bill is = %d", bill);
            printf("\nThank You for Visiting.");
            break;
        }
    }
}