#include "BasicUnitAtm.h"

BasicUnitAtm BasicUnitAtm::operator-()
{
	with_draw();
	return BasicUnitAtm();
}

void  BasicUnitAtm::disp()
{
	cout << "Press  1 to withdrawal" << endl;
	cout << "Press 2 to display information" << endl;
}

ostream & operator << (ostream & output, BasicUnitAtm & obj)
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

istream & operator >> (istream & input, BasicUnitAtm& obj)
{
	obj.take_input();
	return input;
}