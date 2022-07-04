#pragma once
#include "Atm.h"
class BasicUnitAtm :public Atm
{
public:
	BasicUnitAtm operator- ();
	friend ostream & operator << (ostream & output, BasicUnitAtm & obj);
	friend istream & operator >> (istream & input, BasicUnitAtm &obj);
	void disp();
};

