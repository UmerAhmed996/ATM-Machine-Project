#include "ComplexAtm.h"

ComplexAtm ComplexAtm:: operator ^ (const ComplexAtm& obj)
{
	change_pin();
	return ComplexAtm();
}

void ComplexAtm::disp1()
{
	cout << "Press 1 to withdrawal" << endl;
	cout << "Press 2 for balance inquiry" << endl;
	cout << "Press 3 to transfer money" << endl;
	cout << "Press 4 to change your PIN" << endl;
	cout << "Press 5 to display information" << endl;
}

ComplexAtm ComplexAtm:: operator-()
{
	with_draw();
	return ComplexAtm();
}

ComplexAtm ComplexAtm:: operator*()
{
	balance_inquiry();
	return ComplexAtm();
}

ComplexAtm ComplexAtm:: operator % (const ComplexAtm& obj)
{
	cout << "\nCard Number\n";
	cout << "\nUser 1: " << o1.card_obj.get_card() << endl;
	cout << "User 2: " << o2.card_obj.get_card() << endl;
	transfer_money();

	return ComplexAtm();
}

ostream & operator << (ostream & output, ComplexAtm& obj)
{
	if (obj.flag == 1)
	{
		if (obj.check1 == 2)
		{
			obj.o1.display2();
		}
		else
		{
			obj.o1.display();
		}
	}
	else if (obj.flag == 2)
	{
		if (obj.check1 == 2)
		{
			obj.o2.display2();
		}
		else
		{
			obj.o2.display();
		}

	}
	return  output;
}

istream & operator >> (istream & input, ComplexAtm& obj)
{
	obj.take_input();
	return input;
}