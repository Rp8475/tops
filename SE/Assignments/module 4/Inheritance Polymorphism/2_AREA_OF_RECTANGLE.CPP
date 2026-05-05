// PROGRAM 2 : AREA OF RECTANGLE - (START) ----------------------------->
#include <iostream>
using namespace std;

// Base class to store dimensions of a rectangle
class Rectangle
{
public:
    int length, width;

    // Function to input the dimensions of the rectangle
    setdata()
    {
        cout << "Enter Length : ";
        cin >> length;
        cout << "Enter Width : ";
        cin >> width;
    }
};

// Derived class to calculate and display the area of the rectangle
class Area : public Rectangle
{
public:
    int area;

    // Function to calculate and display the area
    getdata()
    {
        area = length * width; // Calculate area
        cout << "Area of Rectangle : " << area;
    }
};

main()
{
    Area obj;      // Create an object of the Area class
    obj.setdata(); // Input dimensions of the rectangle
    obj.getdata(); // Calculate and display the area
}
// PROGRAM 2 : AREA OF RECTANGLE - (END) ----------------------------->