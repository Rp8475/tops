// PROGRAM 3 : DISPLAY TEACHER AND STUDENT DETAILS - (START) ----------------------------->
#include <iostream>
using namespace std;

// Base class to store personal details
class Person
{
    string name;
    int age;

public:
    // Function to input personal details
    set_person()
    {
        cout << "Enter the Name:";
        cin >> name;
        cout << "Enter the Age:";
        cin >> age;
    }
    // Function to display personal details
    get_person()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};
class Student : public Person // student class derived by person classs
{
    int percentage;

public:
    // Function to input student details
    set_student()
    {
        set_person();
        cout << "Enter the percentage : ";
        cin >> percentage;
    }
    // Function to display student details
    get_student()
    {
        cout << "\n***********Student's Details***********\n\n";
        get_person();
        cout << "Percentage : " << percentage << endl;
    }
};
class Teacher : public Person // teacher class derived by person class
{
    int salary;

public:
    // Function to input teacher details
    set_teacher()
    {
        set_person(); // Call base class method to input personal details
        cout << "Enter Salary : ";
        cin >> salary;
    }
    // Function to display teacher details
    get_teacher()
    {
        cout << "\n***********Teacher's Details***********\n\n";
        get_person(); // Call base class method to display personal details
        cout << "Salary : " << salary << endl;
    }
};
main()
{
    Student obj1;       // student class object
    Teacher obj2;       // teacher class object
    obj1.set_student(); // Input student details
    obj1.get_student(); // Display student details

    cout << "\n----------------------------------------------------\n\n";

    obj2.set_teacher(); // Input teacher details
    obj2.get_teacher(); // Display teacher details
}

// PROGRAM 3 : DISPLAY TEACHER AND STUDENT DETAILS - (END) ----------------------------->