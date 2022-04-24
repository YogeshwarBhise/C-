#include<iostream>
using namespace std;

void CallbyValue(int no)
{
	no++;
}

void CallbyAddress(int *p)
{
	(*p)++;
}

void CallbyReference(int &ref)
{
	ref++;
}
int main()
{
	int a = 10,b = 10,c = 10;
	
	CallbyValue(a);
	cout<<"value of a is "<<a<<"\n";
	
	CallbyAddress(&b);
	cout<<"value of b is "<<b<<"\n";
	
	CallbyReference(c);
	cout<<"value of c is "<<c<<"\n";
	
	return 0;
}