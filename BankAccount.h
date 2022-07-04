#pragma once
#include<iostream>
using namespace std;

class BankAccount
{
public:
	//constructor
	BankAccount();
	BankAccount(string n, string b, float c);
	BankAccount(const BankAccount& b1);

	// getter setter

	void setBankname(string n);
	string getBankname();

	void setBranch(string b);
	string getBranch();

	void setTotalCash(float c);
	float getTotalCash();

protected:

	string BankName;
	string Branch;
	float TotalCash;
};

