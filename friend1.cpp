//Friendship inherit hot nahi

#include<iostream>
using namespace std;
class Demo
{
	public:
		int i;
	protected:
		int j;
	private:
		int k;
	public:
		Demo()
		{
			i = 10;
			j = 20;
			k = 30;
		}
		
	friend void fun();
};
void fun()
{
	cout<<"Inside naked fun function\n";
	Demo obj;
	cout<<obj.i<<"\n";
	cout<<obj.j<<"\n";
	cout<<obj.k<<"\n";
}
int main()
{
	fun();
	return 0;
}