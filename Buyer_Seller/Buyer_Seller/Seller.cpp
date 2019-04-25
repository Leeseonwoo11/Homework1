#pragma once
#include "pch.h"
#include "seller.h"



using namespace std;


SELLER::SELLER(unsigned int s_money, unsigned  int s_itemnum) : S_money(s_money), S_itemnum(s_itemnum)
{
	if (s_money < 0 || s_itemnum < 0)
	{
		assert(false);
	}
	price = MER::itemprice;
}



void SELLER::sell(int sitemnum, MER* A)//ÆÈ±â µ·+ °³¼ö- //ÆÈ·Á´Â ¾ç, ÆÈ·Á´Â »óÀÎ
{
	if (sitemnum * A->itemprice > A->money) { cout << "»óÀÎµ·¾øÀ½" << endl; }
	else if (S_itemnum < sitemnum) { cout << "ÆÈ ¹°°Ç °³¼ö°¡ ¸ðÀÚ¶ó" << endl; }
	else
	{
		S_money += sitemnum * A->itemprice;
		S_money -= (sitemnum * A->itemprice) / 10;
		S_itemnum -= sitemnum;
		A->money -= sitemnum * A->itemprice;
		A->itemnum += sitemnum;
		A->tax += (sitemnum * A->itemprice) / 10;
		price = A->itemprice;
		cout << "ÆÇ¸Å" << endl;
		cout << "-----------------" << endl;
	}
}

