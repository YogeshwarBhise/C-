//this file contains a drawback virtual4.cpp has the solution to that

#include<iostream>
using namespace std;

class Base
{
	public:
	int x,y;
	
	void fun()
	{
		cout<<"Base fun\n";
	}

	void gun()
	{
		cout<<"Base gun\n";
	}
};

class Derived:public Base
{
	public:
	int i,j;
	void sun()
	{
		cout<<"Inside Derived Sun\n";
	}
	void fun()
	{
		cout<<"Inside Derived fun\n";//redefination
	}
};
int main()
{
	Base *bp = new Derived(); //upcasting
	bp->fun(); // but we expect derived fun instaed of Base fun
	bp->gun();
	//bp->sun(); not allowed
	
	cout<<"size of Base: "<<sizeof(Base)<<"\n";
	cout<<"size of Derived: "<<sizeof(Derived)<<"\n";
	
	return 0;
}

// -> operator is used boz we need to access using pointer
//-> is indirect operator