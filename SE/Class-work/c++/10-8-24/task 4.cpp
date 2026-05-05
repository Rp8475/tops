#include <iostream>
using namespace std;

class bank{
	public:
		string name;
		int acno,deposit,deposit3;
		int add,wi;
		
	public:
		details(string name,int acno,int deposit)
		{
			this->name = name;
			cout<<this->name<<endl;
			this->acno = acno;
			this->deposit = deposit;
		}
		
		deposit1(int add)
		{
			this->add = add;
		}
		
		show()
		{
			deposit3 = this->deposit + this->add;
			
			this->deposit3 = deposit3;
			cout<<"your total deposit is : "<<this->deposit;
		}
		
		withdraw(int wi)
		{
			this->wi=wi;
		}
		show1()
		{
			cout<<"\nyour balance is : "<<this->deposit3 - this->wi;
		}
};

int main()
{
	bank obj;
	obj.details("rohan",1712004,999999999);
	obj.deposit1(100000);
	obj.show();
	obj.withdraw(2000000);
	obj.show1();
}
