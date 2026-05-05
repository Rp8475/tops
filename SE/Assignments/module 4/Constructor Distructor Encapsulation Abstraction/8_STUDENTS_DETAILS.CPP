#include<iostream>
using namespace std;
//class to store address details
class Address
{
	public:
	string city,state;
	set_address(string c,string s)
	{
		city=c;
		state=s;
	}	
	
};
//class to store and diplay details
class Student
{
	Address *add; // address pointer 
	string name;
	int roll_no,mark,clas;
	public:
		set(string n,int r,int m,int c,Address *add) // set member function to store information
		{
			name=n;
			roll_no=r;
			mark=m;
			clas=c;
			this->add=add;	
		}
		string calculate_grade() // member function for calculate grade
		{
			if(mark>100 || mark<0)
			{
				return "Invalid mark";
			}
			if(mark<100 && mark>=90)
			{
				return "A";
			}
			if(mark<90 && mark>=75)
			{
				return "B";
			}
			if(mark<75 && mark >=55)
			{
				return "C";
			}
			if(mark<55 && mark>=33)
			{
				return "D";
			}
			if(mark<33)
			{
				return "E";
			}
		}
		display(Address *add) //display all information
		{
			cout << "Name:"<<name<<endl;
			cout<<"Roll No:"<<roll_no<<endl;
			cout<<"Class:"<<clas<<endl;
			cout<<"Mark:"<<mark<<endl;
			cout<<"Address..."<<endl;
			cout<<"State:"<<add->state<<endl;
			cout<<"City:"<<add->city<<endl;
		}
};
main()
{
	Address add; // object of address class
	add.set_address("Ahmedabad","Gujarat"); //set member function called
	Student obj; //student class object
	obj.set("Mahesh",1,95,12,&add); //set member function called
	obj.display(&add); //display member function called
	cout<<"Grade:"<<obj.calculate_grade(); //calculate grade member function called & return string 
}
