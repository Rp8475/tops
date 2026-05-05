#include<iostream>

using namespace std;

class A{
	public: fun1()
	{
		cout<<"home"<<endl;
	}
};
class B:public A{

		public: fun1()
	{
		A::fun1(); //scope resolution oprator
		cout<<"car"<<endl;
	}
};


main()
{
	B obj;
	obj.fun1();

}
