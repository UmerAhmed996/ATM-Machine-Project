#include "SavingAccount.h"

SavingAccount::SavingAccount()
{
	interestRate = 0.0;
}

SavingAccount::SavingAccount(float i)
{
	interestRate = i;
}

SavingAccount::SavingAccount(const SavingAccount& s1)
{
	interestRate = s1.interestRate;
}

void SavingAccount::setinterestRate(float i)
{
	interestRate = i;
}

float SavingAccount::getinterestRate()
{
	return interestRate;
}

void SavingAccount::calculate_interest()
{
	float time = 1;
	float b;
	setinterestRate(0.5);
	b = getinterestRate() * time * TotalCash;
	cout << b << endl;
}