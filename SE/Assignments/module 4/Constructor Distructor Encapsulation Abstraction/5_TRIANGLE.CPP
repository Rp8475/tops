// PROGRAM 5 : CHECK TRIANGLE IS EQUILATERAL, ISOSCELES OR SCALENE- (START) ----------------------------->
#include <iostream>
using namespace std;

class Triangle
{
private:
    double side1, side2, side3; // Private member variables for the three sides of the triangle

public:
    // Constructor to initialize the sides of the triangle
    Triangle()
    {
        cout << "Enter the lengths of the three sides of the triangle :" << endl;

        cout << "Side 1: ";
        cin >> side1;
        cout << "Side 2: ";
        cin >> side2;
        cout << "Side 3: ";
        cin >> side3;
    }

    // Function to display the type of triangle
    display()
    {
        // Function to check if the triangle is equilateral
        if ((side1 == side2) && (side2 == side3)) // All sides are equal
        {
            cout << "The triangle is Equilateral." << endl;
        }
        // Function to check if the triangle is isosceles
        else if ((side1 == side2) || (side2 == side3) || (side1 == side3)) // At least two sides are equal
        {
            cout << "The triangle is Isosceles." << endl;
        }
        // Function to check if the triangle is scalene
        else if ((side1 != side2) && (side2 != side3) && (side1 != side3)) // All sides are different
        {
            cout << "The triangle is Scalene." << endl;
        }
        else
        {
            cout << "The given sides do not form a valid triangle." << endl;
        }
    }
};

int main()
{
    // double a, b, c;

    // Create a Triangle object with the given sides
    Triangle obj;

    // Display the type of the triangle
    obj.display();
}

// PROGRAM 5 : CHECK TRIANGLE IS EQUILATERAL, ISOSCELES OR SCALENE- (END) ----------------------------->