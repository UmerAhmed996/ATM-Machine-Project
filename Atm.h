#pragma once
#include"User.h"
#include<iostream>
using namespace std;

class Atm
{
	long long int cardn;
	int pin_n;
	int n_pin = 0;
public:

	User o1;
	User o2;

	void with_draw();
	void User_end();
	void take_input();
	void balance_inquiry();
	void change_pin();
	void transfer_money();
	void disp1();
	int check1;
	int check2;
	int flag;
};