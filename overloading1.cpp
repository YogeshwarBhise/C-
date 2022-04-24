// note : redefination in samr class is not allowed

#include<iostream>
using namespace std;

class Demo
{
	public:
		int i,j; // characeteristics

		void gun() // defination
		{
			cout<<"Inside gun\n";
		}
		void fun() // behaviour -- defination
		{
			cout<<"Inside fun\n";
		}
		void fun(int no) // behaviour -- Overlaoded defination
		{
			cout<<"Inside fun\n";
		}	
};

int main()
{
	
	return 0;
}