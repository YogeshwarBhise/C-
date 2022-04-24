//Function overloading
//name mangling - complier changes the name (Refer Below)
//standard naming according to bjrane strongstrous
// name mangling means changing the name or decorating the name

//Function call is done from aseembler and it first pushes arguments and thencalls the address of that particular function

#include<iostream>
using namespace std;

class Demo
{
	public:
	//Addition@2ii
	int Addition(int no1, int no2) //Lets consider adress of func as 1000
	{
		int ans = 0;
		ans = no1 + no2;
		return ans;
	}
	//Addition@3iii
	int Addition(int no1, int no2,int no3)//Lets consider adress of func as 2000
	{
		int ans = 0;
		ans = no1 + no2 + no3;
		return ans;
	}
	//Addition@4iiii
	int Addition(int no1, int no2,int no3,int no4)//Lets consider adress of func as 3000
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
	
	//PUSH 11
	//PUSH 10
	//CALL 1000
	ret = obj.Addition(10,11);   //obj.Addition@2ii(10,11)
	cout<<"2 num addition: "<<ret<<"\n";
	
	//PUSH 21
	//PUSH 11
	//PUSH 10  
	//CALL 2000
	ret = obj.Addition(10,11,21); //obj.Addition@3iii(10,11,21)
	cout<<"2 num addition: "<<ret<<"\n";
	
	//PUSH 54
	//PUSH 21
	//PUSH 11
	//PUSH 10
	//CALL 3000
	ret = obj.Addition(10,11,21,51); //obj.Addition@4iiii(10,11,21,51)
	cout<<"2 num addition: "<<ret<<"\n";
	
	return 0;
}