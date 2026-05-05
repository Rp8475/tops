// PROGRAM 7 : CHECK DATE IS VALID OR NOT- (START) ----------------------------->
#include<iostream>
using namespace std;
class Date
{
	private:
		//private data member
		int day,month,year;
	public:
		set()
		{
			cout<<"Enter the Day:";
			cin>>day;
			cout<<"Enter the month:";
			cin>>month;
			cout<<"Enter the Year:";
			cin>>year;
		}
		get()
		{
			cout<<"Date:-"<<day<<"/"<<month<<"/"<<year<<endl;
		}
		bool validate() //validate member function to validate date and return boolian value[0/1]
		{
			if(day>31 || day<=0) // check day is invalid
			{
				return false;
			}
			if(month<1 && month>12) //check month is invalid
			{
				return false;
			}
			if((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) // check month 
			{
				return false;
			}
			if(month==2)
			{
				if((year%400==0 && year%100!=0) || year%400==0) //check leap year month
				{
					if(day>29) 
					{
						return false;
					}
				}
				else
				{
					if(day>28)
					{
						return false;
					}
				}
			}
			return true;
		}
};
main()
{
	Date d1;//object of Date class
	bool valid; // boolian variable for check returning value is 0 or 1
	d1.set();//set method calling using object
	d1.get();//get method calling using object
	valid=d1.validate();//validate method calling using object and return value store in valid variable
	if(valid==1)
	{
		cout<<"Date is Valid";
	}
	else
	{
		cout<<"Date is Not valid";
	}
}
// PROGRAM 7 : CHECK DATE IS VALID OR NOT- (END) ----------------------------->