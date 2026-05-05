#include <iostream>
using namespace std;

class A
{
public:
    fun1()
    {
        cout << "This is the function 1." << endl;
    }
};

class B
{
public:
    fun1()
    {
       
        cout << "This is the function 2." << endl;
    }
};

class C : public B,public A
{
public:
    fun1()
    {
        A::fun1(),B::fun1();
		 // scope resolution operator
        cout << "This is the function 3." << endl;
    }
};



 main()
{
    C obj;
    obj.fun1();
}
