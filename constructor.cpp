#include<iostream>

using namespace std;

class Demo
{
	public:
	int x;  //characteristics
	int y;  //characteristics 
	
	Demo()
	{
		cout<<"Inside Default Constructor\n";
		x = 0;
		y = 0;
	}
	
	Demo(int i, int j)
	{
		cout<<"Inside Parameterized Constructor\n";
		x = i;
		y = j;
	}
	
	Demo(Demo &ref)
	{
		cout<<"Inside Copy Constructor\n";
	}
	
	~Demo()
	{
		cout<<"Inside Destructor\n";
	}
};

int main()
{
	
	Demo obj1(11,21);
	Demo obj2(51,101);
	
	printf("In C++ All the C syntaxes are Applicable. \n");
	cout<<sizeof(obj1)<<"\n";
	cout<<sizeof(obj2)<<"\n";
	
	cout<<"Value of x in obj1: "<<obj1.x<<"\n";
	cout<<"Value of x in obj2: "<<obj2.x<<"\n";
	
	obj1.x++;
	cout<<"Value of x in obj1: "<<obj1.x<<"\n";
	cout<<"Value of x in obj2: "<<obj2.x<<"\n";
	
	return 0;
}