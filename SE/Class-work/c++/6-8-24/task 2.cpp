#include<iostream>

using namespace std;

class A{
	public: home()
	{
		cout<<"home"<<endl;
	}
};
class B:public A{

		public: car()
	{
		cout<<"car"<<endl;
	}
};
class C:public A{
	public: respect()
	{
		cout<<"respect"<<endl;
	}
};


main()
{
	B obj;
	obj.home();
	obj.car();
	
	C obj1;
	obj1.respect();
	obj1.home();

}
