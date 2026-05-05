// PROGRAM 1 : MAKE A SIMPLE CALCULATOR USING CLASS - (START) ----------------------------->
#include <iostream>
using namespace std;

// Globally Declared
int num1, num2, result;

// This is the only class which we will make that object
class Calculator
{
public:
    // int num1, num2, result;

    // Display the Multiple programs list
    menu()
    {
        cout << "1. Addition" << endl;
        cout << "2. Substraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
    }

    // input() is described to Get value from user
    input()
    {
        cout << "Enter First Number : " << endl;
        cin >> num1;
        cout << "Enter Second Number : " << endl;
        cin >> num2;
    }

    // addition() is used to add 2 numbers
    addition()
    {
        return num1 + num2;
    }

    // substraction() is used to subtract 2 numbers
    substraction()
    {
        return num1 - num2;
    }

    // multiplication() is used to multiply 2 numbers
    multiplication()
    {
        return num1 * num2;
    }

    // division() is used to divide 2 numbers
    division()
    {
        if (num2 == 0)
        {
            cout << "Division By Zero" << endl;
            return 0;
        }
        else
        {
            return num1 / num2;
        }
    }
};

// Driver Code
int main()
{
    int choice;

    // Make Object of class
    // class_name : calculator
    // object_name : obj
    Calculator obj;
    obj.menu(); // call the function using object

    while (1)
    {
        // get choice from user
        cout << "Enter Choice : ";
        cin >> choice;
        if (choice == 1)
        {
            obj.input();
            cout << "Addition : " << num1 << " + " << num2 << " = " << obj.addition() << endl;
        }

        else if (choice == 2)
        {
            obj.input();
            cout << "Substraction : " << num1 << " - " << num2 << " = " << obj.substraction() << endl;
        }

        else if (choice == 3)
        {
            obj.input();
            cout << "Multiplication : " << num1 << " * " << num2 << " = " << obj.multiplication() << endl;
        }

        else if (choice == 4)
        {
            obj.input();
            cout << "Division : " << num1 << " / " << num2 << " = " << obj.division() << endl;
        }

        else if (choice == 5)
        {
            cout << "Thank You :)" << endl;
            break;
        }

        else
        {
            cout << "Invalid Choice. Please try again." << endl;
            break;
        }
    }
}
// PROGRAM 1 : MAKE A SIMPLE CALCULATOR USING CLASS - (END) ----------------------------->

// do
// {
//     cout << "Enter Choice : ";
//     cin >> choice;

//     switch (choice)
//     {
//     case 1:
//         obj.input();
//         cout << "Addition : " << num1 << " + " << num2 << " = " << obj.addition() << endl;
//         break;
//     case 2:
//         obj.input();
//         cout << "Substraction : " << num1 << " - " << num2 << " = " << obj.substraction() << endl;
//         break;
//     case 3:
//         obj.input();
//         cout << "Multiplication : " << num1 << " * " << num2 << " = " << obj.multiplication() << endl;
//         break;
//     case 4:
//         obj.input();
//         cout << "Division : " << num1 << " / " << num2 << " = " << obj.division() << endl;
//         break;
//     case 5:
//         cout << "Thank You :)" << endl;
//         break;
//     default:
//         cout << "Invalid Choice. Please try again." << endl;
//     }
//     while (choice != 5);
// }
