#include<iostream>
using namespace std;
class A // Base class
{
	private:
		int x;
	public:
		int y;
	protected:
		int z;
};
class B:private A // derived class
{
	public:
		func1()
		{
			x=1; //error 
			y=2; // correct
			z=3; // correct
		}
};
class C:public B // subsequently derived class
{
	public:
		func2()
		{
			x=1; //error 
			y=2; // error
			z=3; // error
		}
};
nonfunc(B &obj2) // non-member function
{
	obj2.x=1; // error 
	obj2.y=2; // error
	obj2.z=3; // error
};
main() // non-member function
{
	A obj1;
	B obj2;
	C obj3;
	obj1.func1();
	obj2.func2();
	nonfunc(obj2);
}

//*******************************************************************************************************************

/*			Base class           Derived class
		   private will be ->   not be inherited	
		   public will be  ->   protected	
		   protected will be -> protected  */
#include<iostream>
using namespace std;
class A // Base class
{
	private:
		int x;
	public:
		int y;
	protected:
		int z;
};
class B:protected A // derived class
{
	public:
		func1()
		{
			x=1; //error because x is private data member of base A class
			y=2; // correct
			z=3; // correct
		}
};
class C:public B // subsequently derived class
{
	public:
		func2()
		{
			x=1; //error because x is private data member of base A class
			y=2; // correct
			z=3; // correct
		}
};
nonfunc(B &obj2) // non-member function
{
	obj2.x=1; // error  because non member function cannot access private data member of base class
	obj2.y=2; // error  because non member function cannot access public data member of base class
	obj2.z=3; // error  because non member function cannot access protected data member of base class
};
main() // non-member function
{
	A obj1;
	B obj2;
	C obj3;
	obj1.func1();
	obj2.func2();
	nonfunc(obj2);
}

//***************************************************************************************************************************************************

#include<iostream>
using namespace std;
class A // Base class
{
	private:
		int x;
	public:
		int y;
	protected:
		int z;
};
class B:public A // derived class
{
	public:
		func1()
		{
			x=1; //error because x is private data member of base A class
			y=2; // correct
			z=3; // correct
		}
};
class C:public B // subsequently derived class
{
	public:
		func2()
		{
			x=1; //error because x is private data member of base A class
			y=2; // correct
			z=3; // correct
		}
};
nonfunc(B &obj2) // non-member function
{
	obj2.x=1; // error because none member function can't access private data member of class
	obj2.y=2; // correct
	obj2.z=3; // error
};
main()
{
	A obj1;
	B obj2;
	C obj3;
	obj1.func1();
	obj2.func2();
	nonfunc(obj2);
}


