//Friendship inherit hot nahi
#include<iostream>
using namespace std;

class Hello
{	
	public:
	void fun();
	void gun();
};

class Demo
{
	public:
		int i;
	protected:
		int j;
	private:
		int k;
	public:
		Demo()
		{
			i = 10;
			j = 20;
			k = 30;
		}
		
	//friend void Hello::fun();
	//friend void Hello::gun();
	friend class Hello;
};

void Hello::fun()
	{
		cout<<"Inside member fun function\n";
		Demo obj;
		cout<<obj.i<<"\n";
		cout<<obj.j<<"\n";
		cout<<obj.k<<"\n";
	}

void Hello::gun()
	{
		cout<<"Inside member gun function\n";
		Demo obj;
		cout<<obj.i<<"\n";
		cout<<obj.j<<"\n";
		cout<<obj.k<<"\n";
	}
int main()
{
	Hello hobj;
	hobj.fun();
	hobj.gun();
	return 0;
}