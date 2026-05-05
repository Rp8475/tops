#include<iostream>

using namespace std;


int r,MM,PM,CM,TM,per;
char n[100];


class A{
	public: student()
	{
	
		cout<<"enter name"<<endl;
		cin>>n;
		
		cout<<"enter roll no."<<endl;
		cin>>r;
	}
};
class B:public A{

		public: marks()
	{
		cout<<"enter maths mark : ";
		cin>>MM;
		
		if(MM>=0 && MM<=100){
		
		}else
		{
				cout<<"valid marks"<<endl;
				return 0;
		}
			cout<<"enter physics mark : ";
		cin>>PM;
		
			if(PM>=0 && PM<=100){
		
		}else
		{
				cout<<"valid marks"<<endl;
				return 0;
		}
			cout<<"enter chemistry mark : ";
		cin>>CM;
		
			if(CM>=0 && CM<=100){
		
		}else
		{
				cout<<"valid marks"<<endl;
				return 0;
		}
		
		TM=MM+PM+CM;
		
		
		    cout<<"total marks : "<<TM<<endl;
		    
		    per= TM/3;
		    
		    cout<<"persentage : "<<per<<endl;
		
	}
};

class C:public B{
	public: grade()
	{
				  if(per==100)
		 {
	  	cout<<"Over achivment";
	
	  }
	 else if(per<=99 &&per>=80)
	 {
	  	cout<<"exelent";
	  		 
	  }
	  else if(per<=79 &&per>=70)
	  {
	  	cout<<"good";
	  	
	  }
	  
	   else if(per<=69 && per>=50)
	  {
	  	cout<<"avrage";
	  		
	  }
	  else if(per<=49 && per>=33)
	  {
	  	cout<<"bad";
	  	
	  }
	  else
	  {
	  	cout<<"fail";
	  		
	  }
	}
};
class D:public C{
	public: result()
	{
	cout<<"\n\n\nname : "<<n<<endl;
	cout<<"roll no. : "<<r<<endl;
	cout<<"maths : "<<MM<<endl;
	cout<<"physics : "<<PM<<endl;
	cout<<"chemistry : "<<CM<<endl;	
	cout<<"total marks : "<<TM<<endl;	
	cout<<"percentage : "<<per<<endl;	
}
};
    
	

main()
{
		D obj;
		obj.student();
		obj.marks();
		obj.result();
		obj.grade();
}
