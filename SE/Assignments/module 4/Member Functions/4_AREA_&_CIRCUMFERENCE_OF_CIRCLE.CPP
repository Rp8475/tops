// PROGRAM 4 : AREA & CIRCUMFERENCE OF CIRCLE - (START) ----------------------------->
#include <iostream>
using namespace std;

class Circle
{
private:
    int radius; // Private member variable to store the radius of the circle

public:
    float pi = 3.14;
    // Constructor
    Circle()
    {
        // Prompt the user to enter the radius of the circle
        cout << "Radius : ";
        cin >> radius; // Read the radius from the user
    }

    // Method to calculate the area of the circle
    double area()
    {
        // Calculate and return the area using the formula π * radius^2
        return pi * radius * radius;
    }

    // Method to calculate the circumference of the circle
    double circumference()
    {
        // Calculate and return the circumference using the formula 2 * π * radius
        return 2 * pi * radius;
    }

    // Display the Output
    void display()
    {
        cout << "Area of Circle is : " << area();
        cout << "\nCircumference of Circle : " << circumference();
    }
};

main()
{
    Circle obj; // Create an object of the Circle class
    // obj.pi();
    obj.display(); // Call the display method to show the area and circumference
}
// PROGRAM 4 : AREA & CIRCUMFERENCE OF CIRCLE - (END) ----------------------------->