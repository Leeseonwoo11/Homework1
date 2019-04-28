#pragma once
#include "pch.h"


using namespace std;


SELLER::SELLER(unsigned int s_money, unsigned  int s_itemnum)
	: MER(s_money, s_itemnum)
{
}



void SELLER::sell(int a_Count)//팔려는 양, 팔려는 상인
{
	if (itemnum < a_Count) { cout << "팔 물건 개수가 모자라" << endl; return; }
	
	itemnum -= a_Count;
	money += a_Count * itemprice;

}

