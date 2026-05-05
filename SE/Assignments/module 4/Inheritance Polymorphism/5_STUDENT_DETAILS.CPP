// PROGRAM 5 : STUDENT DETAILS USING MULTILEVEL INHERITANCE- (START) ----------------------------->
#include <iostream>
using namespace std;

// Base class to store student's roll number
class Student
{
    int roll_no;

public:
    // Function to input roll number
    set_roll_no()
    {
        cout << "Enter the Roll No : ";
        cin >> roll_no;
    }
    // Function to display roll number
    get_roll_no()
    {
        cout << "Roll No : " << roll_no << endl;
    }
};

// Derived class to store marks in two subjects
class Test : public Student
{
protected:
    int mark1, mark2;

public:
    // Function to input marks for two subjects
    set_mark()
    {
        cout << "Enter the First Subject Marks : ";
        cin >> mark1;
        cout << "Enter the Second Subject Marks : ";
        cin >> mark2;
    }
    // Function to display marks for two subjects
    get_mark()
    {
        cout << "First Subject Mark : " << mark1 << endl;
        cout << "Second Subject Mark : " << mark2 << endl;
    }
};

// Derived class to calculate and display total marks
class Result : public Test
{
    int total_mark;

public:
    // Function to calculate total marks
    set_total()
    {
        total_mark = mark1 + mark2; // Calculate total marks
    }
    // Function to display total marks
    get_total()
    {
        cout << "Total Mark : " << total_mark << endl;
    }
};
main()
{
    Test obj1;
    Result obj; // Create an object of Result class

    obj.set_roll_no(); // Input roll number
    obj.set_mark();    // Input marks for subjects
    obj.set_total();   // Calculate total marks

    cout << "\n----- Student's Details -----\n\n";
    obj.get_roll_no(); // Display roll number
    obj.get_mark();    // Display marks for subjects
    obj.get_total();   // Display total marks
}

// PROGRAM 5 : STUDENT DETAILS USING MULTILEVEL INHERITANCE- (END) ----------------------------->#include <iostream>