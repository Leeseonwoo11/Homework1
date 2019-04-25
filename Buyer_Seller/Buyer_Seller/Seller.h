#include "Merchant.h"
#include <iostream>
#include <cassert>
#include <vector>
#include <algorithm>


class SELLER : public MER
{
public:
	int S_money = 0;
	int S_itemnum = 0;
	int price = 0;
	SELLER(unsigned int s_money, unsigned  int s_itemnum);
	virtual const char* Name() override { return "ÆÇ¸ÅÀÚ"; }
	virtual int MONEY() override { return S_money; }
	virtual int ITEMNUM() { return S_itemnum; }
	virtual int PRICE()override { return price; }
	void sell(int sitemnum, MER* A);


};