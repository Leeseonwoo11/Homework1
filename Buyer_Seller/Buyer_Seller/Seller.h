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
	virtual const char* Name() override { return "판매자"; }
	virtual int MONEY() override { return S_money; }//셀러돈 리턴
	virtual int ITEMNUM() { return S_itemnum; }//셀러개수리턴
	virtual int PRICE()override { return price; }//가격리턴
	void sell(int sitemnum, MER* A);


};