#include<iostream>
using namespace std;

class Demo
{
	int x;
	int y;
	
	Demo(int a = 10, int b = 20)
	{
		cout<<"Inside Parameterized constructor with defalut argument\n";
		x = a;
		y = b;
	}

	void fun(int no)
	{
			cout<<"Inside fun\n";
	}
};

int main()
{
	Demo obj1;
	obj.fun(51);
	return 0;
}