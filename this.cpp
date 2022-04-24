#include<iostream>
using namespace std;

class Demo
{
	public:	
	int x;
	int y;
	
	Demo(int a = 10, int b = 20)
	{
		cout<<"Inside Parameterized constructor with defalut argument\n";
		x = a;
		y = b;
	}

	//void fun(Demo *this, int no)
	void fun(int no)  // consider base pointer as 1000
	{
	
		cout<<"Inside fun\n";
		cout<<this<<"\n";

	}
};

int main()
{
	Demo obj1;
	obj1.fun(51); 
	//fun(&obj,51)
	//fun(100,51)
	
	return 0;
}