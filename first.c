// Using procedural oriented programming (POP)
//Refer first.cpp for oop

#include<stdio.h>

int Addition(int iNo1,int iNo2)
{
	auto int iAns = 0;
	
	iAns = iNo1 + iNo2;
	return iAns;
}
int Subtraction(int iNo1,int iNo2)
{
	auto int iAns = 0;
	
	iAns = iNo1 - iNo2;
	return iAns;
}

int main()
{
	auto int iValue1 = 0,iValue2 = 0,iRet = 0;
	
	printf("Enter first number: \n");
	scanf("%d",&iValue1);								

	printf("Enter second number: \n");	
	scanf("%d",&iValue2);

	iRet = Addition(iValue1,iValue2);
	printf("Addition : %d\n",iRet);
	
	iRet = Subtraction(iValue1,iValue2);
	printf("Subtraction : %d\n",iRet);
	
	return 0;
}


//Function
//Method
//Procedure
//API Application Programming Interface


// All the above words means the same thing
//In the above code there are 3 Function i.e Method i.e Procedure i.e API 
