#include <iostream>
using namespace std;

// Inline function to find the multiplication of two numbers
inline int multiply(int a, int b) {
    return a * b;
}

// Inline function to find the cubic value of a number
inline int cubic(int a) {
    return a * a * a;
}

main() {
    int num1, num2;

    cout << "Enter integer no.1 for multiplication: ";
    cin >> num1;
    
    
     cout << "Enter integer no.2 for multiplication: ";
      cin >> num2;
    cout << "The multiplication of " << num1 << " and " << num2 << " is: " << multiply(num1, num2) << endl<<endl;

    int num;
    cout << "Enter an integer to find its cubic value: ";
    cin >> num;
    cout << "The cubic value of " << num << " is: " << cubic(num) << endl;



}

