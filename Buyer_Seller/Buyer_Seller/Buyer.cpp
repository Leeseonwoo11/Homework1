#pragma once
#include "pch.h"
#include "buyer.h"
#include <iostream>
#include <cassert>
#include <vector>
#include <algorithm>



//구매자
using namespace std;

BUYER::BUYER() {} 
BUYER::BUYER(unsigned int b_money, unsigned int b_itemnum) :B_money(b_money), B_itemnum(b_itemnum)
{
	if (b_money < 0 || b_itemnum < 0)
	{
		assert(false);
	}
}


void BUYER::buy(int bitemnum, MER *A)//사려는양,사려는 상인,
{
	if (A->itemnum < bitemnum) { cout << "물건 개수가 모자라 못사" << endl; } //상점물건의 개수가 구매하려는 양보다 적을때 못삼
	else if (B_money < bitemnum * A->itemprice) // 구매자의 돈이 구매할 양에 따른 가격보다 적을때 못삼
	{ cout << "돈이모자라" << endl; }
	else
	{
		B_money -= bitemnum * A->itemprice; //구매했을대 구매한 개수*가격을 구매자의 돈에서 뺌
		B_itemnum += bitemnum; // 구매한 개수만큼 구매자의 개수에 더해줌;
		price = A->itemprice; // 구매한 가격을 받아옴;

		
		A->money += bitemnum * A->itemprice; //상인의 돈에 구매자가 지불한 만큼 더해줌
		A->itemnum -= bitemnum; // 상인의 물건개수에서 구매자가 구매한 만큼 빼줌

		cout << bitemnum <<"개 구매" << endl;
		cout << "-----------------" << endl;
	}
}


