#include "Merchant.h"


class SELLER : public MER
{

public:

	SELLER(unsigned int s_money, unsigned  int s_itemnum);
	virtual const char* Name() override { return "�Ǹ���"; }

	void sell(int a_Count);

};