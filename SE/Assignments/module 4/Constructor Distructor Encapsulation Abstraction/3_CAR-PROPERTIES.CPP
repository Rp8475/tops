// PROGRAM 3 : CAR PROPERTIES USING GET & SET FUNCTIONS - (START) ----------------------------->
#include <iostream>
using namespace std;
class Car // car class
{
private:
    string cname; // private data member
    string model;
    int year; // private data member
public:
    set() // set member function for set car information
    {
        cout << "Enter the Company name : ";
        cin >> cname;
        cout << "Enter the Model no : ";
        cin >> model;
        cout << "Enter the year : ";
        cin >> year;
    }
    get() // get member function for display car information
    {
        cout << "\n--------------Print Values--------------\n\n";
        cout << "Company Name : " << cname << endl;
        cout << "Model no : " << model << endl;
        cout << "Year : " << year;
    }
};
main()
{
    Car c;   // c object of Car class
    c.set(); // set method calling
    c.get(); // get method calling
}

// PROGRAM 3 : CAR PROPERTIES USING GET & SET FUNCTIONS - (END) ----------------------------->