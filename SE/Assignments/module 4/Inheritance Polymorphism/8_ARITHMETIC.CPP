// PROGRAM 8 : ARITHMETIC OPERATIONS USING OVERLOADING- (START) ----------------------------->#include <iostream>
#include <iostream>
using namespace std;
class Calculator
{
public:
    // Function to add two integers
    int calculate(int a, int b)
    {
        return a + b;
    }

    // Function to add two floating-point numbers
    double calculate(double a, double b)
    {
        return a * b;
    }

    // Function to multiply two integers
    double calculate(int a, double b)
    {
        return a - b;
    }

    // Function to multiply two floating-point numbers
    float calculate(float a, float b)
    {
        return a / b;
    }
};

int main()
{
    Calculator calc;
    cout << "Addition:" << calc.calculate(10, 5) << endl;
    cout << "Subtraction:" << calc.calculate(55, 5.5) << endl;
    cout << "Multiplication:" << calc.calculate(39.5, 6.6) << endl;
    cout << "Division:" << calc.calculate(10.5f, 5.5f) << endl;
}

// PROGRAM 8 : ARITHMETIC OPERATIONS USING OVERLOADING - (START) ----------------------------->#include <iostream>