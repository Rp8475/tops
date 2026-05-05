// PROGRAM 6 : EMPLOYEE'S UPDATED SALARY BASED ON PERFORMANCE- (START) ----------------------------->
#include <iostream>
using namespace std;
class Employee // Employee class
{
    // private data member
    int id;
    float rate;
    double salary;
    string name;

public:
    Employee() // default constructor
    {
        cout << "Employee Id : ";
        cin >> id; // Input employee ID
        cout << "Employee Name : ";
        cin >> name; // Input employee name
    }

    // Function to set the initial salary
    setsalary()
    {
        cout << "Employee Salary : ";
        cin >> salary; // Input initial salary
    }
    calculatesalary() // member function for calculate salary
    {
        cout << "Enter the Performance Rate[0-5]";
        cin >> rate; // Input performance rate

        // Check if the rate is within the valid range
        if (rate >= 0.0 && rate <= 5.0)
        {
            // Calculate the new salary based on performance rate
            salary += salary * rate / 100;
        }
        else
        {
            // Display an error message if the rate is invalid
            cout << "Invalid Rating..";
        }
    }
    show() // display updated salary
    {
        cout << "Updated Salary=" << salary; // Output the updated salary
    }
};
main()
{
    Employee e;          // Create an object of Employee class
    e.setsalary();       // Set the initial salary
    e.calculatesalary(); // Calculate the updated salary based on performance
    e.show();            // Display the updated salary
}
// PROGRAM 6 : EMPLOYEE'S UPDATED SALARY BASED ON PERFORMANCE- (END) ----------------------------->