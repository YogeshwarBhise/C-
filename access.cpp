#include<iostream>
using namespace std;
class Demo
{
	public:
		int i;
	private:
		int j;
	protected:
		int k;
};
class Hello: public Demo
{
	public:
		int x;
	private:
		int y;
	protected:
		int z;
		public:
		void fun()
		{
			cout<<k<<"\n";
			
		}
};
int main()
{
	cout<<"Class demo size is : "<<sizeof(Demo)<<"\n";
	cout<<"Class Hello size is : "<<sizeof(Hello)<<"\n";
	Demo dobj;
	dobj.i;	//a
	cout<<dobj.i<<"\n";
	//dobj.j;	//na
	//dobj.k;	//na
	
	
	Hello hobj;
	hobj.x;	//a
	cout<<hobj.x<<"\n";
	//hobj.y;	//na
	//hobj.z;	//na
	
	hobj.i;//a
	cout<<hobj.i<<"\n";
	//hobj.j; //na
	//hobj.k; //na
	
	hobj.fun();
	return 0;
}

/*	
Demo dobj;
Hello hobj;
	
cout<<"Class demo size is : "<<sizeof(dobj)<<"\n";
cout<<"Class Hello size is : "<<sizeof(hobj)<<"\n";
Hello is derived from Demo
*/