#include "BankAccount.h"

BankAccount::BankAccount()
{
	BankName = '\0';
	Branch = '\0';
	TotalCash = 0.0;
}

BankAccount::BankAccount(string n, string b, float c)
{
	BankName = n;
	Branch = b;
	TotalCash = c;
}

BankAccount::BankAccount(const BankAccount& b1)
{
	BankName = b1.BankName;
	Branch = b1.Branch;
	TotalCash = b1.TotalCash;
}

void BankAccount::setBankname(string n)
{
	BankName = n;
}
string BankAccount::getBankname()
{
	string temp;
	temp = BankName;
	return temp;
}

void  BankAccount::setBranch(string b)
{
	Branch = b;
}

string BankAccount::getBranch()
{
	string temp;
	temp = Branch;
	return temp;
}

void  BankAccount::setTotalCash(float c)
{
	TotalCash = c;
}

float  BankAccount::getTotalCash()
{
	return  TotalCash;
}