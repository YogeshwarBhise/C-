#include<iostream>
using namespace std;

class Base
{
	public:
	
		int i,j;
		Base()
		{
			cout<<"Inside Base Constructor\n";
		}
		~Base()
		{
			cout<<"Inside Base Destructor\n";
		}
};

class Derived: public Base
{
	public:
		int a,b,c;
		Derived()
		{
			cout<<"Inside Derived Constructor\n";
		}
		~Derived()
		{
			cout<<"Inside Derived Destructor\n";
		}
};
class Derived1: public Derived
{
	public:
		int k,l;
		Derived1()
		{
			cout<<"Inside Derived1 Constructor\n";
		}
		~Derived1()
		{
			cout<<"Inside Derived1 Destructor\n";
		}
};

int main()
{
	Derived1 dobj;
	
	return 0;
}