#include<iostream>

namespace 
{
	void fun()
	{
		std::cout<<"Inside Fun\n";	
	}
}

int main()
{
	std::cout<<"Inside Main\n";
	
	fun();
	
	return 0;
}