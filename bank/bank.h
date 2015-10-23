#ifndef here
#define here
#include "string"
using namespace std;

class bank_account
{
private:
	string accountname;
	string accountnum;
	double balance;
public:
	void deposite (double d);
	void withdraw (double w);
	bank_account (string name, string num);
	string getname();
	string getaccountnum();
	double getbalance();

};
#endif