#include<iostream>

namespace Yogeshwar
{
	void fun()
	{
		std::cout<<"Inside Fun of Yogeshwar";
	}	
}

namespace Bhise
{
	void fun()
	{
		std::cout<<"Inside fun of Bhise\n";
	}
}

int main()
{
	std::cout<<"Inside Main\n";
	
	using namespace Yogeshwar;
	using namespace Bhise;
	
	Yogeshwar::fun();
	return 0;
}