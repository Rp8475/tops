// PROGRAM 5 : AREA & PARAMETER OF RECTANGLE - (START) ----------------------------->
#include <iostream>
using namespace std;

class Rectangle
{
private:
    // Private member variables for length and width of the rectangle
    float length;
    float width;

public:
    // Constructor to initialize the rectangle with given length and width
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    // Member function to calculate the area of the rectangle
    float area()
    {
        return length * width; // Area = length * width
    }

    // Member function to calculate the perimeter of the rectangle
    float perimeter()
    {
        return 2 * (length + width); // Perimeter = 2 * (length + width)
    }

    // Member function to display the area and perimeter of the rectangle
    void display()
    {
        cout << "Area of Rectangle: " << area() << endl;
        cout << "Perimeter of Rectangle: " << perimeter() << endl;
    }
};

main()
{
    // Create a Rectangle object with length 5.0 and width 3.0
    Rectangle obj(5.0, 3.0);

    // Call the display method to show the area and perimeter
    obj.display();
}

// PROGRAM 5 : AREA & PARAMETER OF RECTANGLE - (END) ----------------------------->