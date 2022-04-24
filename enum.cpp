#include<iostream>
using namespace std;

int main()
{
	enum Yogeshwar_Education{PPA=0,LB=1,LSP=2,Python= 3};
	int Fees[] = {15000,16000,17000,18000};
	const float Duration[] = {3.5,4.0,3.5,4.5};
	int choice  = 0;
	
	cout<<"Select the batch you want to join\n";
	cout<<"0. PPA\n";
	cout<<"1. LB\n";
	cout<<"2. LSP\n";
	cout<<"3. Python\n";
	
	cin>>choice;
	
	switch(choice)
	{
		case PPA:
			cout<<"Thank You for selecting PPA batch\n";
			cout<<"Duration is:"<<Duration[PPA]<<"\n";
			cout<<"Fees for PPA is: "<<Fees[PPA]<<"\n";
			break;
			
		case LB:
			cout<<"Thank You for selecting LB batch\n";
			cout<<"Duration is:"<<Duration[LB]<<"\n";
			cout<<"Fees for LB is: "<<Fees[LB]<<"\n";
			break;
		
		case LSP:
			cout<<"Thank You for selecting LSP batch\n";
			cout<<"Duration is:"<<Duration[LSP]<<"\n";
			cout<<"Fees for LSP is: "<<Fees[LSP]<<"\n";
			break;
	
		case Python:
			cout<<"Thank You for selecting Python batch\n";
			cout<<"Duration is:"<<Duration[Python]<<"\n";
			cout<<"Fees for Python is: "<<Fees[Python]<<"\n";
			break;
	
		default:
				cout<<"Invalid Input!!";
	}
	return 0;
}