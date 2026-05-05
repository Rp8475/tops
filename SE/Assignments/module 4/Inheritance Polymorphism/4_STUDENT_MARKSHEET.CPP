// PROGRAM 4 : DISPLAY MARKSHEET - (START) ----------------------------->
#include <iostream>
using namespace std;

// Base class to store student details
class Student
{
    string name, div;
    int roll, clas;

public:
    // Function to input student details
    set_student()
    {
        cout << "**********Fill the Student's Details.**********\n\n";
        cout << "Enter the Student Name : ";
        cin >> name;
        cout << "Enter the Roll number : ";
        cin >> roll;
        cout << "Enter the Class : ";
        cin >> clas;
        cout << "Enter the Division : ";
        cin >> div;
    }
    // Function to display student details
    get_student()
    {
        cout << "Name : " << name << endl;
        cout << "Roll number : " << roll << endl;
        cout << "Class : " << clas << endl;
        cout << "Division : " << div << endl;
    }
};
// Base class to store marks and calculate results
class Marks
{
    int marks[3], total; // Array to store marks for 3 subjects
    float percentage;

public:
    // Function to input marks for 3 subjects
    set_marks()
    {
        cout << "Enter the Marks of HTML : ";
        cin >> marks[1];
        cout << "Enter the Marks of CSS : ";
        cin >> marks[2];
        cout << "Enter the Marks of Javascript : ";
        cin >> marks[3];
    }
    // Function to calculate and display total marks and percentage
    get_result()
    {
        total = marks[1] + marks[2] + marks[3];
        percentage = (float)total / 3;
        cout << "Total Marks : " << total << endl;
        cout << "Percentage : " << percentage << endl;
    }
    // Function to determine and display grade based on percentage
    grade()
    {
        if (percentage >= 90)
        {
            cout << "Grade : A";
        }
        else if (percentage >= 80)
        {
            cout << "Grade : B";
        }
        else if (percentage >= 65)
        {
            cout << "Grade : c";
        }
        else if (percentage >= 50)
        {
            cout << "Grade : D";
        }
        else if (percentage >= 33)
        {
            cout << "Grade : E";
        }
        else
        {
            cout << "Fail.";
        }
    }
};
// Derived class to display the complete marksheet
class Marksheet : public Student, public Marks
{
public:
    // Function to display the complete marksheet
    display_marksheet()
    {
        set_student();
        set_marks();
        cout << "\n*******Mark Sheet*******\n\n";
        get_student();
        get_result();
        grade();
    }
};
main()
{
    Marksheet obj1;           // Create an object of Marksheet class
    obj1.display_marksheet(); // Display the complete marksheet
}

// PROGRAM 4 : DISPLAY MARKSHEET - (END) ----------------------------->