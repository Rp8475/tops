#include <iostream>
using namespace std;

class A
{
public:
    int a, b, addition;

protected:
    int substraction;

private:
    int multiplication;

    A()
    {
        cout << "Enter A : ";
        cin >> a;
        cout << "Enter B : ";
        cin >> b;
    }
    add()
    {
        addition = a + b;
        cout << addition;
    }
};

class B : public A
{
protected:
    int a, b, c;

    sub()
    {
        substraction = a - b;
        cout << substraction;
    }
};

class C : public B
{
public:
    int a, b, c;

    mul()
    {
        multiplication = a * b;
        cout << multiplication;
    }
};

main()
{
    C obj;
    obj.add();
    obj.sub();
    obj.mul();
}