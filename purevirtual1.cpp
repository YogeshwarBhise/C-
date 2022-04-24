#include<iostream>
using namespace std;

class Base
{
	public:
		int x,y;
	//1000
	void fun() //Concrete non virtual
	{
		cout<<"Base fun\n";
	}
	//2000
	virtual void gun() //Concrete virtual
	{
		cout<<"Base gun\n";
	}
	//3000
	virtual void sun() //Concrete virtual
	{
		cout<<"Base sun\n";
	}
	//______ no adress bcoz no body
	virtual void run() = 0; //Abstract(pure virtual) func
};

class Derived: public Base
{
	public:
		int i,j;
	void fun() //(Redifination)Concrete non virtual
	{
		cout<<"Derived fun\n";
	}	
	
	virtual void gun() //Concrete virtual
	{
		cout<<"Derived gun\n";
	}
	
	void run() //Concrete function
	{
		cout<<"Derived run\n";
	}
};

int main()
{
	//Base bobj; Not Allowed
	Derived dobj; //Allowed
	
	Base *bp = NULL;
	bp = &dobj; //Upcasting
	
	cout<<sizeof(Base)<<"\n";
	cout<<sizeof(Derived)<<"\n";
	
	bp->fun(); //Base fun
	bp->gun();//Derived gun
	bp->sun();//Base sun
	bp->run(); //Derived run
	
	return 0;
}