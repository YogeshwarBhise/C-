//Constant behaviours
#include<iostream>
using namespace std;

class Demo
{
	public:
	int i; 
	const int j; //Constant characteristic
	
	Demo(int a, int b):j(b)
	{
		i=a;
	}
	void fun()
	{
		cout<<"Inside Fun\n";
		i++; //Allowed
		//j++; Not Allowed
	}
	//b is constant input args
	void gun(int a, const int b) const//Constant function/brhavior
	{
		int x = 10;
		const int y = 20;
		cout<<"Inside gun\n";
		//i++; Not Allowed
		//j++; Not Allowed
		x++;//allowed
		//y++;//not allowed
		
		a++;//Allowed
		//b++;//Not Allowed
	}
};
int main()
{
	Demo obj1(11,21);
	const Demo obj2(11,21); 

	obj1.fun();
	obj1.gun(10,20);

	//obj2.fun(); Not Allowed
	obj2.gun(10,20);

	return 0;
}