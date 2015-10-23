#include "iostream"
#include "bank.h"
#include "string"
using namespace std;

void main()
{
	bank_account m ("boss" , "26347" );
	cout<<m.getname();
	cout<<endl;
	cout<<m.getaccountnum();
	cout<<endl;
	cout<<m.getbalance();
	cout<<endl;
	
	 
	m.deposite(8000);
	cout<<m.getbalance();
	cout<<endl;

	m.withdraw(200);
	cout<<m.getbalance();
	cout<<endl;


}