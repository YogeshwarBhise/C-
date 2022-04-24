#include<iostream>

using namespace std;

class Demo
{
	public:
	int x,y;
	
	virtual void fun()
	{
		cout<<"Inside fun Demo\n";
	}
	
	virtual void gun()
	{
		cout<<"Inside gun Demo\n";
	}
	
	virtual void run()
	{
		cout<<"Inside run Demo\n";
	}
};

class Hello:public Demo
{
	public:
	int l,j;
	
	void fun()
	{
		cout<<"Inside fun Hello\n";
	}
	
	void gun()
	{
		cout<<"Inside gun Hello\n";
	}
	
	/*void run()
	{
		cout<<"Inside run Hello\n";
	}*/
};

int main()
{
	Demo *dp = new Hello();
	
	dp->fun();
	dp->gun();
	dp->run();
	return 0;
}