// PROGRAM 7 : CONSTRUCTOR USED IN MULTILEVEL INHERITANCE - (START) ---------------------------->
#include <iostream>
using namespace std;

// Base class A
class A
{
public:
    // Constructor for class A
    A()
    {
        cout << "Class A: Constructor" << endl;
    }
};

// Derived class B inherits from A
class B : public A
{
public:
    // Constructor for class B
    B()
    {
        cout << "Class B: Derived Class A" << endl;
    }
};

// Further derived class C inherits from B (and indirectly from A)
class C : public B
{
public:
    // Constructor for class C
    C()
    {
        cout << "Class C: Derived Class A, B" << endl;
    }
};

int main() // Entry point of the program
{
    C obj; // Create an object of class C
    // This will invoke constructors of A, B, and C in that order due to multilevel inheritance
    return 0; // Indicate successful execution
}
// PROGRAM 7 : CONSTRUCTOR USED IN MULTILEVEL INHERITANCE - (END) ---------------------------->
