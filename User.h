#pragma once
#include<string>
#include"Card.h"
#include"BankAccount.h"
#include"CheckingAccount.h"
#include"SavingAccount.h"

class User
{
public:

	SavingAccount s_obj;
	CheckingAccount c_obj;
	Card card_obj;

	void setname(string n);
	string getname();

	void setphonenumber(string p);
	string getphonenumber();

	void setaddress(string a);
	string getaddress();

	void set_user(string n, string p, string a, string BankName1, string Branch1, float TotalCash1, int pin1);
	void set_user2(string n, string p, string a, string BankName1, string Branch1, float TotalCash1, int pin1);
	void display();
	void display2();
	//constructor

	User();
	User(string n, string p, string a);

private:
	string Name;
	string PhoneNumber;
	string Address;
};