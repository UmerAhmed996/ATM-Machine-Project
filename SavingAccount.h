#pragma once
#include "BankAccount.h"
class SavingAccount : public BankAccount
{
public:

	//constructor
	SavingAccount();
	SavingAccount(float i);
	SavingAccount(const SavingAccount& s1);

	void setinterestRate(float i);
	void calculate_interest();
	float getinterestRate();

private:
	float interestRate;
};

