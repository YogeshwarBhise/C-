#include<iostream>
using namespace std;

class Demo
{
	public:
	int Add(int no1, int no2)
	{
		int ans  = 0;
		ans = no1 + no2;
		return ans;
	}
	
};

int main()
{
	Demo obj;
	int ret = 0;
	ret = obj.Add(10,20);

	cout<<"Addition is :"<<ret<<"\n";
	
	cout<<"Size of object obj"<<sizeof(obj)<<"\n";
	return 0;
}