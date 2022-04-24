//This program is used to demonstrate copy constructor
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
		x = ref.x;
		y = ref.y;
	}
	
	~Demo()
	{
		cout<<"Inside Destructor\n";
	}
};

int main()
{
	
	Demo obj1(11,21);
	
	Demo obj2(obj1);
	
	cout<<"obj1 has "<<obj1.x <<"and" <<obj1.y<<"\n";
	cout<<"obj2 has "<<obj2.x <<"and" <<obj2.y<<"\n";
	
	return 0;
}