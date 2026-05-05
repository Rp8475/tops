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
class C:public B{
	public: respect()
	{
		cout<<"respect"<<endl;
	}
};

main()
{
		C obj;
		obj.home();
		obj.car();
		obj.respect();
}
