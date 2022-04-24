//According to bjarne strostrus 
//we should initilize static varibale
//outside the class
#include<iostream>
using namespace std;

class Demo
{
	public:
	int i,j;  //non static characteristic
	static int x; //static characteristic

	Demo()
	{
		cout<<"Inside Defualt constructor\n";
		i = 10;
		j = 20;
	}
	
	~Demo()
	{
		cout<<"Inside Destructor\n";
	}
};

int Demo::x = 30;

int main()
{
	cout<<Demo::x<<"\n";
	
	Demo obj1;
	Demo obj2;
	cout<<sizeof(obj1)<<"\n";  //8
	cout<<sizeof(obj2)<<"\n";  //8
	
	
	cout<<obj1.i<<"\n";
	cout<<obj2.i<<"\n";
	//cout<<sizeof(obj2)<<"\n";
	return 0;
}