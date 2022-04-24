#include<iostream>
using namespace std;

class ops
{
	public:
	int x;
	int j;
	
	ops()
	{
		cout<<"Inside Default Constructor";
	}
	
	ops(int A,int B)
	{
		cout<<"Inside Parameterized Constructor";
	}
	
	ops(ops &ref)
	{
		cout<<"Inside copy Constructor";
		
	}
	
	~ops()
	{
		cout<<"Inside Destructor";
	}
};

int main()
{
	int iValue1 = 0,iValue2 = 0,iRet = 0;
	
	cout<<"Enter first number: ";
	cin>>iValue1;
	
	cout<<"Enter second number: ";
	cin>>iValue2;
	
	ops obj1;
	ops obj2(obj1);
	
	return 0;
}