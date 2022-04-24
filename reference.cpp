// in cpp & operator 


#include<iostream>
using namespace std;

int main()
{
	int no = 11;
	
	int &x = no;
	
	int *p = &no;
	
	cout<<"value of x and no are same i.e : "<<x<<"\n";
	cout<<" value of p "<< p <<"\n";
	return 0;
}