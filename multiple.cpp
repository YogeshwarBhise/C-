#include<iostream>
using namespace std;

class Base1
{
	public:
	
		int i,j;
		Base1()
		{
			cout<<"Inside Base1 Constructor\n";
		}
		~Base1()
		{
			cout<<"Inside Base1 Destructor\n";
		}
};

class Base2
{
	public:
	
		int x,y;
		Base2()
		{
			cout<<"Inside Base2 Constructor\n";
		}
		~Base2()
		{
			cout<<"Inside Base2 Destructor\n";
		}
};
class Derived: public Base2,Base1
{
	public:
		int a;
		Derived()
		{
			cout<<"Inside Derived Constructor\n";
		}
		~Derived()
		{
			cout<<"Inside Derived Destructor\n";
		}
};

int main()
{
	Derived dobj;
	cout<<sizeof(dobj)<<"\n";
	return 0;
}