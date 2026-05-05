#include<iostream>
using namespace std;


	class cal{
		public:
			int a,b,c;
			
			add(){
				
				cout<<"enter your no a : ";
				cin>>a;
				
				cout<<"enter your no b : ";
				cin>>b;
				
				cout<<"add :"<<a+b<<endl;
			}
			
			sub(){
				
				cout<<"enter your no a : ";
				cin>>a;
				
				cout<<"enter your no b : ";
				cin>>b;
				
				cout<<"sub :"<<a-b<<endl;
			}
			
			mul(){
				
				cout<<"enter your no a : ";
				cin>>a;
				
				cout<<"enter your no b : ";
				cin>>b;
				
				cout<<"mul :"<<a*b<<endl;
			}
			
			div(){
				
				cout<<"enter your no a : ";
				cin>>a;
				
				cout<<"enter your no b : ";
				cin>>b;
				
				cout<<"div :"<<a/b<<endl;
			}
	};


main()
{

	
	cal obj;
	obj.add();
	obj.sub();
	obj.mul();
	obj.div();
}
