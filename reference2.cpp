// we can create n number of references to a variable
// there is no rules or regulation for that
#include<iostream>
using namespace std;

int main()
{
	int no = 11;
	int &x = no;
	int &y = no;
	
	return 0;
}