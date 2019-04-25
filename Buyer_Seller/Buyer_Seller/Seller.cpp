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
}



void SELLER::sell(int sitemnum, MER* A)//팔려는 양, 팔려는 상인
{
	if (sitemnum * A->itemprice > A->money) { cout << "상인돈없음" << endl; }
	else if (S_itemnum < sitemnum) { cout << "팔 물건 개수가 모자라" << endl; }
	else
	{
		S_money += sitemnum * A->itemprice; //팔았을때 개수*가격 만큼 판매자 돈 증가
		S_itemnum -= sitemnum; //판 만큼 판매자의 물건개수에서 빼줌
		price = A->itemprice; //판 물건가격 상점에서 받아옴

		A->money -= sitemnum * A->itemprice; //상점의 돈을 판매자가 번 돈의 양만큼 빼줌
		A->itemnum += sitemnum; //상점의 물건 개수에 판매자가 판  물건 개수를 더함 


		cout << sitemnum << "개 판매" << endl;
		cout << "-----------------" << endl;
	}
}

