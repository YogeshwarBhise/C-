#include<iostream>
using namespace std;

class operation
{
	public:
	int iNo1;
	int iNo2;
	
	operation()
	{
		cout<<"Inside Default constructor\n";	
		iNo1 = 0;
		iNo2 = 0;
	
	}
	operation(int A,int B)
	{
		cout<<"Inside Parametrized constructor\n";	
		iNo1 = A;
		iNo2 = B;
	}
	~operation()
	{
		cout<<"Inside Default Destructor\n";	
	}	
	
	int Addition()
	{
		int iAns = 0;
		iAns = iNo1 + iNo2;
		return iAns;
		
	}
};

int main()
{
	int iValue1 =  0,iValue2 =  0, iRet = 0;
	
	cout<<"Enter 1st no.:\n";
	cin>>iValue1;
	cout<<"Enter 2nd no.:\n";
	cin>>iValue2;
	
	operation obj1;
	operation obj2(iValue1,iValue2);

	iRet = obj1.Addition();
	cout<<"Addition is:"<<iRet<<"\n";
	
	iRet = obj2.Addition();
	cout<<"Addition is:"<<iRet<<"\n";
	
	return 0;
}