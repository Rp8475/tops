#include<iostream>

using namespace std;

class A{
	private: int a=10,b=20;
	
	friend class B;
};
class B{

		public: fun1(A &obj)
	{
	   cout<<"A : "<<obj.a<<endl;
	   cout<<"B : "<<obj.b<<endl;
	}
};


main()
{
	A obj;
	
	B obj1;
	obj1.fun1(obj);

}
