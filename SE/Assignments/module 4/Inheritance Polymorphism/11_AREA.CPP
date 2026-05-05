// PROGRAM 11 : FIND AREA OF CIRCLE, RECTANGLE & TRIANGLE - (START) ----------------------------->
#include <iostream>
using namespace std;
class Find_area
{
public:
    area(double radius) // member function for find area of circle
    {
        cout << "Area of circle : " << 3.14 * radius * radius << endl; // 3.14 is pi value
    }
    area(int length, int breadth) // member function for find area of rectangle
    {
        cout << "Area of Rectangle : " << length * breadth << endl;
    }
    area(double length, double breadth) // member function for find area of triangle
    {
        cout << "Area of Triangle : " << (length * breadth) / 2;
    }
};
main()
{
    Find_area obj; // Create an object of the Find_area class

    // Call member functions to calculate areas
    obj.area(5.13);      // Calls the function to calculate the area of a circle
    obj.area(5, 10);     // Calls the function to calculate the area of a rectangle
    obj.area(5.5, 10.5); // Calls the function to calculate the area of a triangle
}
// PROGRAM 11 : FIND AREA OF CIRCLE, RECTANGLE & TRIANGLE - (END) ----------------------------->