#include<iostream>
using namespace std;

class Add{
	public:
		string name,city;
		Ho(string name,string city)
		{
			this->name = name;
			this->city = city;
		}
		
};

class B{
	private:
		Add *a;
		
		public:
			int id;
			
			show(int i,Add *a)
			
			{
				id=i;
				this->a = a;
			}
			
			display()
			{
				cout<<"name : "<<a->name<<endl;
				cout<<"city : "<<a->city<<endl;
				cout<<"id : "<<id<<endl;
			}
};




main()
{
	Add obj;
	obj.Ho("rp","amd");
	
	B obj1;
	
	obj1.show(1,&obj);
	obj1.display();
	
}
