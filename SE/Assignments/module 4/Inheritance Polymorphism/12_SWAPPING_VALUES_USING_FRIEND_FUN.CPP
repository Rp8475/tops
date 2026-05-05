// PROGRAM 12 : SWAPPING 2 VALUES USING FRIND FUNCTION - (START) ----------------------------->
#include <iostream>
using namespace std;
class Swap // swap class definition
{
    int a, b; // private data member
public:
    set() // set member function definition
    {
        cout << "Enter the value of A:";
        cin >> a;
        cout << "Enter the value of B:";
        cin >> b;
    }
    friend swap_value(Swap &); // firend function declaration
};
swap_value(Swap &obj) // friend function definition
{
    cout << "\nBefore swaping Value..." << endl;
    cout << "A:" << obj.a << endl;
    cout << "B:" << obj.b << endl;

    // Swapping method
    obj.a = obj.a + obj.b;
    obj.b = obj.a - obj.b;
    obj.a = obj.a - obj.b;

    cout << "\nAfter swaping values..." << endl;
    cout << "A:" << obj.a << endl;
    cout << "B:" << obj.b << endl;
}
main()
{
    Swap obj;        // object created
    obj.set();       // set member function called
    swap_value(obj); // swap_value firend function called and passed object of swap class
}
// PROGRAM 12 : SWAPPING 2 VALUES USING FRIND FUNCTION - (END) ----------------------------->