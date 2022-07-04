#include "Atm.h"

void Atm::User_end()
{
	int check;
	cout << "\nTotal users: 2";
	cout << "\nSelect account type for user 1\n\n"
		<< "-> 1.Saving Account"
		<< "\n-> 2.Checking Account" << endl << endl;
	cin >> check;
	if (check == 1)
	{
		check1 = 1;
		o1.set_user("Hassan", "Bahria", "031642179571", "NBP", "Bahria", 1000, 2233);

		o1.card_obj.setCard();
	}
	else if (check == 2)
	{
		check1 = 2;
		o1.set_user2("Hassan", "Bahria", "031642179571", "NBP", "Bahria", 1050, 2233);

		o1.card_obj.setCard();
	}

	cout << "\nSelect account type for user 2\n\n"
		<< "-> 1.Saving Account"
		<< "\n-> 2.Checking Account" << endl << endl;
	cin >> check;

	if (check == 1)
	{
		check2 = 1;
		o2.set_user("Umer", "bahria", "03228447079", "HBL", "Bahria", 2000, 1122);

		o2.card_obj.setCard();
	}
	else if (check == 2)
	{
		check2 = 2;
		o2.set_user2("Umer1", "bahria", "03228447079", "HBL", "Bahria", 2050, 1122);

		o2.card_obj.setCard();
	}
}

void Atm::take_input()
{
	cout << "\nCard Number\n";
	cout << "\nUser 1: " << o1.card_obj.get_card() << endl;
	cout << "User 2: " << o2.card_obj.get_card() << endl;
	cout << "\nEnter your card number: ";

	while (cin >> cardn)
	{
		if (cardn == o1.card_obj.get_card())
		{
			cout << "\nEnter pin: ";
			while (cin >> pin_n)
			{
				if (o1.card_obj.getpin() == pin_n)
				{
					cout << "\nWelcome " << endl;
					flag = 1;
					break;
				}
				cout << "Wrong pin";
				cout << "\nEnter pin: ";
			}
			break;
		}
		else if (cardn == o2.card_obj.get_card())
		{
			cout << "\nEnter pin: ";
			while (cin >> pin_n)
			{
				if (o2.card_obj.getpin() == pin_n)
				{
					cout << "\nWelcome " << endl;
					flag = 2;
					break;
				}
				cout << "Wrong pin";
				cout << "\nEnter pin: ";
			}
			break;
		}
		else
		{
			cout << "Wrong card number";
			cout << "\nEnter card number: ";
		}
	}
}
void Atm::disp1()
{

	if (o1.card_obj.getpin() == pin_n)
	{
		if (check1 == 1)
		{
			o1.display();
		}
		else if (check1 == 2)
		{
			o1.display2();
		}
	}
	else if (o2.card_obj.getpin() == pin_n)
	{
		if (check2 == 1)
		{
			o2.display();
		}
		else if (check2 == 2)
		{
			o2.display2();
		}
	}
}
void Atm::transfer_money()
{
	balance_inquiry();
	float transfer_amount;
	long long int transfer_acc;
	cout << "\nEnter Account number to send money: ";

	while (cin >> transfer_acc)
	{
		if (transfer_acc == o1.card_obj.get_card() || transfer_acc == o2.card_obj.get_card())
		{
			cout << "Account found ,";
			break;
		}
		else {
			cout << "\nWrong Account number ,Enter Again: ";
		}
	}

	int check_i = -1;
	float balance1 = 0.0;
	float balance2 = 0.0;
	float rem_balance, total_rem;
	cout << "How much money you want to transfer: ";
	cin >> transfer_amount;
	if (o1.card_obj.get_card() == cardn)
	{
		if (check1 == 1)
		{
			if (transfer_amount > o1.s_obj.getTotalCash())
			{
				cout << "You have insufficient amount" << endl;
				check_i = 0;
			}

			if (check_i == -1)
			{
				balance1 = o1.s_obj.getTotalCash();
				balance1 = balance1 - transfer_amount;
				o1.s_obj.setTotalCash(balance1);
			}
		}
		else if (check1 == 2)
		{
			if (transfer_amount > o1.c_obj.getTotalCash())
			{
				cout << "You have insufficient amount" << endl;
				check_i = 0;
			}
			if (check_i == -1)
			{
				o1.c_obj.setfeePerTransaction(20);
				balance1 = o1.c_obj.getTotalCash();
				balance1 = balance1 - transfer_amount - o1.c_obj.getfeePerTransaction();
				o1.c_obj.setTotalCash(balance1);
			}
		}
	}
	if (o2.card_obj.get_card() == cardn)
	{
		if (check2 == 1)
		{
			if (transfer_amount > o2.s_obj.getTotalCash())
			{
				cout << "You have insufficient amount" << endl;
				check_i = 0;
			}
			if (check_i == -1)
			{
				balance1 = o2.s_obj.getTotalCash();
				balance1 = balance1 - transfer_amount;
				o2.s_obj.setTotalCash(balance1);
			}
		}
		else if (check2 == 2)
		{
			if (transfer_amount > o1.c_obj.getTotalCash())
			{
				cout << "You have insufficient amount" << endl;
				check_i = 0;
			}
			if (check_i == -1)
			{
				o2.c_obj.setfeePerTransaction(20);
				balance1 = o2.c_obj.getTotalCash();
				balance1 = balance1 - transfer_amount - o1.c_obj.getfeePerTransaction();
				o2.c_obj.setTotalCash(balance1);
			}
		}
	}

	if (check_i == -1)
	{
		cout << "\nYour remaning cash is: " << balance1 << endl;
		cout << "Fee per transection is: " << o1.c_obj.getfeePerTransaction() << endl;

		if (o1.card_obj.get_card() == transfer_acc)
		{
			if (check1 == 1)
			{
				balance2 = o1.s_obj.getTotalCash();
				balance2 = balance2 + transfer_amount;
				o1.s_obj.setTotalCash(balance2);

			}
			else if (check1 == 2)
			{
				balance2 = o1.c_obj.getTotalCash();
				balance2 = balance2 + transfer_amount;
				o1.c_obj.setTotalCash(balance2);
			}
		}
		if (o2.card_obj.get_card() == transfer_acc)
		{
			if (check2 == 1)
			{
				balance2 = o2.s_obj.getTotalCash();
				balance2 = balance2 + transfer_amount;
				o2.s_obj.setTotalCash(balance2);
			}
			else if (check2 == 2)
			{
				balance2 = o2.c_obj.getTotalCash();
				balance2 = balance2 + transfer_amount;
				o2.c_obj.setTotalCash(balance2);
			}
		}
	}
}

void Atm::with_draw()
{
	float amount1;
	float r_cash;
	if (o1.card_obj.getpin() == pin_n)
	{
		if (check1 == 1)
		{
			cout << "\nEnter amount to Withdraw: ";
			cin >> amount1;
			r_cash = o1.s_obj.getTotalCash() - amount1;
			o1.s_obj.setTotalCash(r_cash);
			cout << "\nAmount after withdrawl is: " << o1.s_obj.getTotalCash();
		}
		else if (check1 == 2)
		{
			o1.c_obj.setfeePerTransaction(20);
			cout << "\nEnter amount to Withdraw: ";
			cin >> amount1;

			r_cash = o1.c_obj.getTotalCash() - amount1 - o1.c_obj.getfeePerTransaction();

			o1.c_obj.setTotalCash(r_cash);
			cout << "\nAmount after withdrawl is: " << o1.c_obj.getTotalCash() << endl;
			cout << "Fee per transection is: " << o1.c_obj.getfeePerTransaction() << endl;
		}

	}
	else if (o2.card_obj.getpin() == pin_n)
	{
		if (check2 == 1)
		{
			cout << "\nEnter amount to Withdraw: ";
			cin >> amount1;
			r_cash = o2.s_obj.getTotalCash() - amount1;

			o2.s_obj.setTotalCash(r_cash);
			cout << "\nAmount after withdrawl is: " << o2.s_obj.getTotalCash() << endl;
		}
		else if (check2 == 2)
		{
			o2.c_obj.setfeePerTransaction(20);
			cout << "\nEnter amount to Withdraw: ";
			cin >> amount1;

			r_cash = o2.c_obj.getTotalCash() - amount1 - o2.c_obj.getfeePerTransaction();
			o2.c_obj.setTotalCash(r_cash);
			cout << "\nAmount after withdrawl is: " << o2.c_obj.getTotalCash() << endl;
			cout << "Fee per transection is: " << o2.c_obj.getfeePerTransaction() << endl;
		}
	}
}
void Atm::change_pin()
{

	cout << "\nEnter pin to change: ";
	cin >> n_pin;

	if (o1.card_obj.getpin() == pin_n)
	{
		o1.card_obj.SetPin(n_pin);
	}
	else if (o2.card_obj.getpin() == pin_n)
	{
		o2.card_obj.SetPin(n_pin);
	}

	if (o1.card_obj.getpin() == n_pin)
	{
		pin_n = n_pin;
	}
	else if (o2.card_obj.getpin() == n_pin)
	{
		pin_n = n_pin;
	}
}
void Atm::balance_inquiry()
{
	cout << "\nTotal cash in Bank account is: ";
	if (o1.card_obj.getpin() == pin_n)
	{
		if (check1 == 1)
		{
			cout << o1.s_obj.getTotalCash();
		}
		else if (check1 == 2)
		{
			cout << o1.c_obj.getTotalCash();
		}
	}
	else if (o2.card_obj.getpin() == pin_n)
	{
		if (check2 == 1)
		{
			cout << o2.s_obj.getTotalCash();
		}
		else if (check2 == 2)
		{
			cout << o2.c_obj.getTotalCash();
		}
	}
	cout << endl;
}