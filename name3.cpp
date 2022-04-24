#include<iostream>

namespace Yogeshwar
{
	void fun()
	{
		std::cout<<"Inside Fun\n";
	}
}

int main()
{	
	std::cout<<"Inside Main\n";
	
	using namespace Yogeshwar;
	
	fun();
	return 0;
}