#include<iostream>
 using namespace std;




class A{
		public:
			int i,n,c=0;
			
			input(){
				
				cout<<"enter your no n :";
				cin>>n;
			}
			
			
			prim(){
				
				for(i=1;i<=n;i++){
					
					if(n%i==0)
					{
						c++;
					}
				}
					if(c==2)
					{
						cout<<n<<" is prime number"<<endl;
					}
					else{
						cout<<n<<" is not prime number"<<endl;
					}
				
				
			}
			
				A(){
		cout<<"welcome"<<endl;
				
			}
	~A(){
		cout<<"get out";
				
			}
	};
		
		
main(){
	
      A obj;
    obj.input();
	obj.prim();
	
}
