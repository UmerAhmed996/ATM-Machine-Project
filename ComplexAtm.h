#pragma once
#include "Atm.h"
class ComplexAtm :public Atm
{
public:
	ComplexAtm operator- ();
	ComplexAtm operator* ();
	ComplexAtm operator % (const ComplexAtm& obj);
	ComplexAtm operator ^ (const ComplexAtm& obj);
	friend ostream & operator << (ostream & output, ComplexAtm &obj);
	friend istream & operator >> (istream & input, ComplexAtm &obj);
	void disp1();
};

