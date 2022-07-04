#include "CheckingAccount.h"

CheckingAccount::CheckingAccount()
{
	feePerTransaction = 0.0;
}

CheckingAccount::CheckingAccount(float f)
{
	feePerTransaction = f;
}

CheckingAccount::CheckingAccount(const CheckingAccount& c1)
{
	feePerTransaction = c1.feePerTransaction;
}

void CheckingAccount::setfeePerTransaction(float f)
{
	feePerTransaction = f;

}

float CheckingAccount::getfeePerTransaction()
{
	return feePerTransaction;
}