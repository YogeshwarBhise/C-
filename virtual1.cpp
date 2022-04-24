//According to bjrane stroustroup 
//to achive overiding there should be to things
//1st is there should be atleast single level inheritance
//2nd is that the function which has to be overidden should be defined in the base class using virtual keyword

//virtual
#include<iostream>
using namespace std;

class Base
{
	public:
	int x,y;
	
};

class Derived:public Base
{
	public:
	int i,j;
	
};

int main()
{
	Base bobj; //static memory allocation
	Derived dobj; //static memory allocation
	
	Base *bp = new Base(); //dynamic memory allocation
	Derived *dp = new Derived();//dynamic memory allocation
	
	return 0;
}