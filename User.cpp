#include "User.h"


User::User()
{
	Name = '\0';
	PhoneNumber = '\0';
	Address = '\0';
}

User::User(string n, string pn, string ad)
{
	Name = n;
	Address = ad;
	PhoneNumber = pn;
}

void User::setname(string n)
{
	Name = n;
}

string User::getname()
{
	string temp;
	temp = Name;

	return temp;
}

void User::setphonenumber(string p)
{
	PhoneNumber = p;
}

string User::getphonenumber()
{
	string temp;
	temp = PhoneNumber;

	return temp;
}
void User::set_user(string n, string p, string a, string BankName1, string Branch1, float TotalCash1, int pin1)
{
	s_obj.setBankname(BankName1);
	s_obj.setBranch(Branch1);
	s_obj.setTotalCash(TotalCash1);
	Name = n;
	Address = p;
	PhoneNumber = a;
	card_obj.SetPin(pin1);

}

void User::set_user2(string n, string p, string a, string BankName1, string Branch1, float TotalCash1, int pin1)
{
	c_obj.setBankname(BankName1);
	c_obj.setBranch(Branch1);
	c_obj.setTotalCash(TotalCash1);
	Name = n;
	Address = p;
	PhoneNumber = a;
	card_obj.SetPin(pin1);
}
void User::display2()
{
	cout << "|--------------------------------------------------|";
	cout << "\n| Bank name    : " << c_obj.getBankname()<<"\t\t\t\t   |" << endl;
	cout << "| Branch name  : " << c_obj.getBranch() << "\t\t\t\t   |" << endl;
	cout << "| Total cash   : " << c_obj.getTotalCash() << "\t\t\t\t   |" << endl;
	cout << "| User name    : " << getname() << "\t\t\t\t   |" << endl;
	cout << "| Phone number : " << getphonenumber() << "\t\t\t   |" << endl;
	cout << "| Address      : " << getaddress() << "\t\t\t           |" << endl;
	cout << "|--------------------------------------------------|" << endl;
}
void User::display() 
{
	cout << "|--------------------------------------------------|";
	cout << "\n| Bank name    : " << s_obj.getBankname() << "\t\t\t\t   |" << endl;
	cout << "| Branch name  : " << s_obj.getBranch() << "\t\t\t\t   |" << endl;
	cout << "| Total cash   : " << s_obj.getTotalCash() << "\t\t\t\t   |" << endl;
	cout << "| User name    : " << getname() << "\t\t\t\t   |" << endl;
	cout << "| Phone number : " << getphonenumber() << "\t\t\t   |" << endl;
	cout << "| Address      : " << getaddress() << "\t\t\t           |" << endl;
	cout << "  Interest rate: "; s_obj.calculate_interest();
	     
	cout << "|--------------------------------------------------|" << endl;
}

void User::setaddress(string a)
{
	Address = a;
}

string User::getaddress()
{
	string temp;

	temp = Address;
	return temp;
}