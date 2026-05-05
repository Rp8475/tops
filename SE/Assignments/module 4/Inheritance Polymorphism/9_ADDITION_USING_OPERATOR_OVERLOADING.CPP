// PROGRAM 9 : ADDITION OF 1D ARRAY USING OPERATOR OVERLOADING - (START) ----------------------------->#include <iostream>
#include <iostream>
using namespace std;
// Define a class sum_array to represent an array and perform operations on it
class sum_array
{
    int a[5]; // An array of size 5 to hold integer elements
public:
    // Constructor to initialize the array elements
    sum_array()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter the Array element[" << i + 1 << "]=";
            cin >> a[i]; // Take input for each element of the array
        }
    }

    // Overload the + operator to add two sum_array objects
    sum_array operator+(sum_array &obj)
    {
        int temp[5]; // Temporary array to store the result of addition
        cout << "Sum of Array matrix..." << endl;
        for (int i = 0; i < 5; i++)
        {
            temp[i] = a[i] + obj.a[i]; // Element-wise addition of two arrays
            cout << "Element [" << i + 1 << "]=" << temp[i] << endl;
        }
    }
    // Function to display the array elements
    void display()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "[" << i + 1 << "]=" << a[i] << endl; // Print each element of the array
        }
    }
};
int main()
{
    sum_array obj1; // Create first sum_array object and initialize it
    sum_array obj2; // Create second sum_array object and initialize it

    cout << "First Array element..." << endl;
    obj1.display(); // Display elements of the first array

    cout << "Second Array element..." << endl;
    obj2.display(); // Display elements of the second array
    obj1 + obj2;    // Add the two arrays using the overloaded + operator
}

// PROGRAM 9 : ADDITION OF 1D ARRAY USING OPERATOR OVERLOADING - (END) ----------------------------->#include <iostream>