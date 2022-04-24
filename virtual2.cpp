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
	Base *bp = new Base(); //dynamic memory allocation
	Derived *dp = new Derived();//dynamic memory allocation
	//Above 2 types of pointer have no casting
	
	Base *bp1 = new Derived(); //upcasting
	//Derived *dp1 = new Base(); //downcasting not allowed
	//Above 2 types have casting
	return 0;
}

//bp is a pointer of type Base which currently holds address of base
// downcasting is not allowed but concept is there
