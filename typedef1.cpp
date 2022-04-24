#include<iostream>
using namespace std;

int main()
{
	struct Demo
	{
		int no1;
		int no2;
	};
	
/*	struct Demo obj;
	struct Demo *p = &obj;
	struct Demo **q = &p;
*/	

	typedef struct Demo
	{
		int no1;
		int no1;
		
	}DEMO,*PDEMO,**PDEMO;
	typedef struct Demo DEMO;
	DEMO obj;
		//struct Demo obj;
	typedef struct Demo *PDEMO;
		//struct Demo *p = &obj;
	PDEMO p = &obj;
	typedef struct Demo **PPDEMO;  
		//struct Demo **q = &p;
	PPDEMO q = &p;
	return 0;
}


/* */