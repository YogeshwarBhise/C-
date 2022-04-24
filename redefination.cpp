// note : redefination in samr class is not allowed
#include<iostream>
using namespace std;

class Demo
{
	public:
		int i,j; // characeteristics

		void fun() // behaviour -- defination
		{
			cout<<"Inside fun\n";
		}
		void gun() // behaviour -- defination
		{
			cout<<"Inside gun\n";
		}	
};

class Hello: public Demo
{
	public:
	int x,y;

	void sun() //defination
	{
		cout<<"Inside sun\n";
	}
	
	void gun() // <--Its redefination NOT overriding
	{			//<-- if we increse any paramter then also it is redifination  
		cout<<"Inside gun of child\n";
	}
	
};

int main()
{
	
	return 0;
}