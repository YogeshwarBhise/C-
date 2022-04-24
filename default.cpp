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
};

int main()
{
	Demo obj1;
	Demo obj2(11);
	Demo obj3(11,21);
	
	return 0;
}