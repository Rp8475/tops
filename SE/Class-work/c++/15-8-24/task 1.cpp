#include<iostream>

using namespace std;

class A{
	public:

	
		virtual salary()=0;//black pure vitual function	

	
};
class B:public A{
	public:
		salary()
	{
		cout<<"B got 20k"<<endl;	
	}
	
};
class C:public A{
	public:
		salary()
	{
		cout<<"C got 30k"<<endl;	
	}
	
};
class D:public A{
	public:
		salary()
	{
		cout<<"D got 30M"<<endl;	
	}
	
};

main()
{
	B obj;
	obj.salary();
	
	C obj1;
	obj1.salary();
	
	D obj2;
	obj2.salary();
}
