#include <iostream>
using namespace std;

class A
{
public:
    int c,d;
    get(int a,int b)
    {
       this->c = a;
       this->d = b;
    }
    set()
    {
    	cout<<"A : "<<this->c;
    	cout<<"A : "<<this->d;
	}
};


 main()
{
    C obj;
    obj.get(10,20);
    obj.set();
}
