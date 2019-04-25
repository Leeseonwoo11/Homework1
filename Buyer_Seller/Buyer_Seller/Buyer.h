#pragma once
#include "Merchant.h"
#include <iostream>
#include <cassert>
#include <vector>
#include <algorithm>

class BUYER : public MER
{
public:
	int B_money = 0;
	int B_itemnum = 0;
	int price = 0;
	BUYER();
	BUYER(unsigned int b_money, unsigned int b_itemnum);
	void buy(int bitemnum, MER *A);

	virtual const char* Name() override { return "±¸¸ÅÀÚ"; }
	virtual int MONEY() override { return B_money; }
	virtual int ITEMNUM() { return B_itemnum; }
	virtual int PRICE() override { return price; }

};