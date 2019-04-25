#pragma once
#include "pch.h"
#include "buyer.h"
#include <iostream>
#include <cassert>
#include <vector>
#include <algorithm>


using namespace std;

BUYER::BUYER() {}
BUYER::BUYER(unsigned int b_money, unsigned int b_itemnum) :B_money(b_money), B_itemnum(b_itemnum)
{
	if (b_money < 0 || b_itemnum < 0)
	{
		assert(false);
	}
	price = MER::PRICE();
}


void BUYER::buy(int bitemnum, MER *A)// 사기 돈- 개수+  //사려는양,사려는 상인,
{
	if (A->itemnum < bitemnum) { cout << "물건 개수가 모자라 못사" << endl; }
	else if (B_money < bitemnum * A->itemprice) { cout << "돈이모자라" << endl; }
	else
	{
		B_money -= bitemnum * A->itemprice;

		B_itemnum += bitemnum;
		A->money += bitemnum * A->itemprice;
		A->itemnum -= bitemnum;
		price = A->itemprice;
		cout << "구매" << endl;
		cout << "-----------------" << endl;
	}
}


