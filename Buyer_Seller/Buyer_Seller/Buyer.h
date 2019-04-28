#pragma once
#include "Merchant.h"


class BUYER : public MER
{
public:

	BUYER() = default;
	BUYER(unsigned int b_money, unsigned int b_itemnum);

	void buy(int a_Count,MER& A);

	virtual const char* Name() override { return "±¸¸ÅÀÚ"; }

};