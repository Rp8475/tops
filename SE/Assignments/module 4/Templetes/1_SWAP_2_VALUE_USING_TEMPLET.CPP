// PROGRAM 1 : SWAP 2 VALUES USING TEMPLET - (START) ----------------------------->
#include <iostream>
using namespace std;

// Define a template function for swapping values
template <class T>   // template is a keyword class T is template type parameter enclosed within a painr og angle brackets, also called generic datatype
swap_value(T a, T b) // function for swaping values..
{
    // Swap the values using arithmetic operations
    a = a + b; // Step 1: Add both values and store in 'a'
    b = a - b; // Step 2: Subtract new 'a' from 'b' to get the original value of 'a'
    a = a - b; // Step 3: Subtract new 'b' from new 'a' to get the original value of 'b'

    // Output the swapped values
    cout << "After swaping values..." << endl;
    cout << "A:" << a << endl;
    cout << "B:" << b << endl;
}

main()
{
    int a = 46, b = 87;
    // Output the values before swapping
    cout << "Before swaping value...." << endl;
    cout << "A=" << a << endl;
    cout << "B=" << b << endl;

    // Call the template function to swap the values
    swap_value(a, b); // function calling
}

// PROGRAM 1 : SWAP 2 VALUES USING TEMPLET - (END) ----------------------------->