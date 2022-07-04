#include"BasicUnitAtm.h"
#include"ComplexAtm.h"

void cls()
{
	system("cls");
	cout << "************************************"
		<< "\n             ATM MACHINE              \n"
		<< "************************************\n\n";
}

int main()
{
	BasicUnitAtm obj1;
	ComplexAtm obj2;
	ComplexAtm obj3;
	int for_loop = 1;
	int check;
	cls();
	cout << "\n\n           ATM TYPE   ";
	cout << "\n-> 1. Complex Atm"
		<< "\n-> 2. Basic Atm" << endl << endl;
	cin >> check;
	if (check == 1)
	{
		obj2.User_end();
		cls();
		cin >> obj2;
	}
	else if (check == 2)
	{
		obj1.User_end();
		cls();
		cin >> obj1;
	}

	while (for_loop != 0)
	{
		if (check == 1)
		{
			int count;
			obj2.disp1();
			cin >> count;

			if (count == 1)
			{
				-obj2;
			}
			else if (count == 2)
			{
				*obj2;
			}
			else if (count == 3)
			{
				obj2 % obj3;
			}
			else if (count == 4)
			{
				obj2 ^ obj3;
			}
			else if (count == 5)
			{
				cout << obj2;
			}
		}
		else if (check == 2)
		{
			int count;
			obj1.disp();
			cin >> count;

			if (count == 1)
			{
				-obj1;
			}
			else if (count == 2)
			{
				cout << obj1;
			}
		}
		cout << "\nPress '0' to exit"
			<< "\nPress '1' to continue" << endl;
		cin >> for_loop;
		cls();
	}

	return 0;
}