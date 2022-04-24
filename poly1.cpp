//Function overloading 
// no need pf contructor bcoz no cahacyteristics and no resources
#include<iostream>
using namespace std;

class Demo
{
	public:
	int Addition(int no1, int no2)
	{
		int ans = 0;
		ans = no1 + no2;
		return ans;
	}
	int Addition(int no1, int no2,int no3)
	{
		int ans = 0;
		ans = no1 + no2 + no3;
		return ans;
	}
	int Addition(int no1, int no2,int no3,int no4)
	{
		int ans = 0;
		ans = no1 + no2 + no3 + no4;
		return ans;
	}

};

int main()
{
	Demo obj;
	int ret = 0;
	ret = obj.Addition(10,11);
	cout<<"2 num addition: "<<ret<<"\n";
	
	ret = obj.Addition(10,11,21);
	cout<<"2 num addition: "<<ret<<"\n";
	
	ret = obj.Addition(10,11,21,51);
	cout<<"2 num addition: "<<ret<<"\n";
	
	return 0;
}