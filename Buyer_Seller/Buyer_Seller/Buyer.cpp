#pragma once
#include "pch.h"
#include "buyer.h"


//구매자
using namespace std;

BUYER::BUYER(unsigned int b_money, unsigned int b_itemnum) : MER(b_money,b_itemnum)
{
	if (b_money < 0 || b_itemnum < 0)
	{
		assert(false);
	}
}


void BUYER::buy(int a_Count,MER& A)//사려는양,사려는 상인,
{
	if (A.FindSeller(a_Count))
	{
		std::cout << "상인이 존재하지 않습니다." << std::endl;
		return;
	}

	if (money < A.GetSeller()->PRICE()* a_Count)
	{
		std::cout << "소지금이 부족합니다." << std::endl;
		return;
	}

	money -= A.GetSeller()->PRICE()* a_Count;
	itemnum += a_Count;

	A.Deal(a_Count);
	
}


