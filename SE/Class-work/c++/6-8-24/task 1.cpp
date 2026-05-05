#include<iostream>

using namespace std;

class A{
	protected:
		int a=10;
	public:home()
	{
		cout<<a<<endl;
	}
};
class B{

		public: car()
	{
		cout<<"car"<<endl;
	}
};
class C:public A,public B{
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
