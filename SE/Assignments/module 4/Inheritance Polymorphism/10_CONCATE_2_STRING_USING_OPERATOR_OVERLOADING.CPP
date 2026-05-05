// PROGRAM 10 : CONCATE 2 STRING USING OPERATOR OVERLOADING - (START) ----------------------------->
#include <iostream>
using namespace std;

// Define a class Concate to represent a string and perform operations on it
class Concate
{
    string str1; // Private member variable to hold the string
public:
    // Constructor to initialize the string with the given value
    Concate(string str)
    {
        str1 = str;
    }

    // Overloaded + operator to concatenate two Concate objects
    Concate operator+(Concate &obj)
    {
        string str3;                          // Temporary string to hold the concatenated result
        str3 = str1 + obj.str1;               // Concatenate the strings from both objects
        cout << "Concated string :=" << str3; // Output the concatenated string
    }

    // Function to display the string stored in the object
    void display()
    {
        cout << str1 << endl; // Print the string to the console
    }
};

main()
{
    // Create two Concate objects with initial strings
    Concate str1("Hello"), str2("Welcome");
    // Display the strings stored in both objects
    str1.display();
    str2.display();
    // Concatenate the two objects using the overloaded + operator
    str1 + str2;
}

// PROGRAM 10 : CONCATE 2 STRING USING OPERATOR OVERLOADING - (END) ----------------------------->