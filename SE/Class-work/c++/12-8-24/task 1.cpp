#include<iostream>
using namespace std;

class Add{
	public:
		string name,city,Name,City;
		Ho(string name,string city)
		{
			this->Name = name;
			this->City = city;
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
				cout<<"name : "<<a->Name<<endl;
				cout<<"city : "<<a->City<<endl;
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
