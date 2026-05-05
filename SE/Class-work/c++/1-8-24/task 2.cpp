#include<iostream>

using namespace std;

class A{
	public: myfun2()
	{
		cout<<"this is parent class"<<endl;
	}
		public: myfun3()
	{
		cout<<"this is gurdian class"<<endl;
	}
};
class B:public A{
	public: myfun1()
	{
		cout<<"this is child class"<<endl;
	}
};

main()
{
		B obj;
		obj.myfun1();
		obj.myfun2();
		obj.myfun3();
}
