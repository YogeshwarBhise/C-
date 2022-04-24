#include<iostream>
using namespace std;

class Demo
{
	public:
	int x;
	int y;
	Demo()
	{
		cout<<"Inside Default Constructor\n";	
	}
	~Demo()
	{
		cout<<"Inside Destructor\n";	
	}
	void fun()
	{
		cout<<"Inside fun\n";
	}
};

int main()
{
	Demo obj; //static objcet creation
	
	Demo *ptr = NULL;
	
	ptr = new Demo;
	obj.fun();		//Direct accessing operator	
	ptr -> fun();  	//Indirect accessing operator
	
	delete ptr;
	return 0;
}