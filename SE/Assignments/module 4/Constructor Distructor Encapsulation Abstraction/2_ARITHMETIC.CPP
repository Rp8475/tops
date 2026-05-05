// PROGRAM 2 : ARITHMETIC OPERATORS USING CONSTRUCTOR - (START) ----------------------------->
#include <iostream>
using namespace std;

// Define a class for arithmetic operations
class Arithmetic
{
public:
    int a, b; // Variables to store the integers

    // Constructor to initialize 'a' and 'b' by user input
    Arithmetic()
    {
        cout << "Enter 1st Integer : ";
        cin >> a;
        cout << "Enter 2nd Integer : ";
        cin >> b;
    }
    // Function to add 'a' and 'b'
    add()
    {
        return a + b;
    }
    // Function to subtract 'b' from 'a'
    sub()
    {
        return a - b;
    }
    // Function to multiply 'a' and 'b'
    multi()
    {
        return a * b;
    }
    // Function to divide 'a' by 'b'
    div()
    {
        float c = a / b;
        if (c == 0) // Check for division by zero
        {
            cout << "Not Found Division By Zero" << endl;
        }
        else
        {
            return c;
        }
    }
    Show()
    {
        cout << "\nAddition : " << add();
        cout << "\nSubstraction : " << sub();
        cout << "\nMultiplication : " << multi();
        cout << "\nDivision : " << div();
    }
};
main()
{
    Arithmetic obj; // Create an object of the Arithmetic class
    // object of Function to display the results of the arithmetic operations
    obj.add();
    obj.sub();
    obj.multi();
    obj.div();
    obj.Show();
}

// PROGRAM 2 : ARITHMETIC OPERATORS USING CONSTRUCTOR - (END) ----------------------------->