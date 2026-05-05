#include<iostream>
 using namespace std;



class cal{
		public:
			int a,b,i,n,factorial=1;
			
			fact(){
				cout<<"enter your no n : ";
				cin>>n;
				
				
				for(i=1;i<n;i++){
					
					factorial = factorial*i;
				
				cout<<factorial<<endl;	
				}
				
			}
	};


main()
{
	cal obj;

	obj.fact();
}
