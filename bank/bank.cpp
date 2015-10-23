#include "bank.h"
#include "string"
using namespace std;

bank_account :: bank_account (string name, string num)
{
	accountname=name;
	accountnum=num;
	balance=200;
}

void bank_account::deposite (double d)
{
	balance+=d;
}

void bank_account::withdraw (double w)
{
	balance=balance-w;
}

string bank_account::getname()
{
	return accountname;
}

string bank_account::getaccountnum()
{
	return accountnum;
}

double bank_account:: getbalance()
{
	return balance;
}