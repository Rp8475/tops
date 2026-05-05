#include<iostream>

using namespace std;

class A{
	public: life(int a)
	{
		cout<<"home"<<endl;	
	}
	public: life(string a)
	{
		cout<<"car"<<endl;	
	}
	public: life(int a,int b)
	{
		cout<<"loan"<<endl;	
	}
	public: life(int a,int b,int c)
	{
		cout<<"respect"<<endl;	
	}
	
};

main()
{
 	 A obj;
     obj.life(10);
     obj.life("hello");
     obj.life(10,20);
     obj.life(10,20,30);
     
	


}
