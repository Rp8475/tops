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
class C{
	public: respect()
	{
		cout<<"respect"<<endl;
	}
};
class D :public B,public C
{
	public: loan()
	{
		cout<<"loan"<<endl;
	}
	
};

main()
{
 	D obj;
	obj.loan();
	obj.car();
	obj.respect();
	obj.home();
	


}
