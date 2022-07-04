#pragma once
#include "BankAccount.h"

class CheckingAccount : public BankAccount
{
public:
	//constructor
	CheckingAccount();
	CheckingAccount(float f);
	CheckingAccount(const CheckingAccount& c1);

	void setfeePerTransaction(float f);
	float getfeePerTransaction();

protected:
	float feePerTransaction;
};

