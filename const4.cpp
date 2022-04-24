//constant characteristics
#include<iostream>
using namespace std;

class Demo
{
	public:
		int i;
		const int j; 
	Demo():j(20)// <--- this is how we initilize const 
	{
		i = 10;
		//j = 20;
	}
	Demo(int a, int b):i(a),j(b)
	{
		cout<<"Inside Paramterized\n";
	}

};

int main()
{
	Demo obj;
	cout<<obj.i<<"\n";
	cout<<obj.j<<"\n";
	
	Demo obj1(11,21);
	cout<<obj1.i<<"\n";
	cout<<obj1.j<<"\n";

	//obj.j++; Not Allowed
	obj1.i++;
	cout<<obj1.i<<"\n";
	return 0;
}