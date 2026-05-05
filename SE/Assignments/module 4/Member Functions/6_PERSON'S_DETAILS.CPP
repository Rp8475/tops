// PROGRAM 6 : PERSON'S DETAILS - (START) ----------------------------->
#include <iostream>
using namespace std;

class Person
{
private:
    // Private member variables to store person's details
    string name, country;
    int age;

public:
    // Member function to set the values of name, age, and country
    setDetails()
    {
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter Age : ";
        cin >> age;
        cout << "Enter Country : ";
        cin >> country;
    }

    // Member function to display the details of the person
    getDetails()
    {
        cout << "\n========================================\n\n";
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Country : " << country << endl;
    }
};

main()
{
    Person obj;       // Create an instance of the Person class
    obj.setDetails(); // Call setDetails method to input person's details
    obj.getDetails(); // Call getDetails method to display person's details
}
// PROGRAM 6 : PERSON'S DETAILS - (END) ----------------------------->