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



void SELLER::sell(int sitemnum, MER* A)//�ȱ� ��+ ����- //�ȷ��� ��, �ȷ��� ����
{
	if (sitemnum * A->itemprice > A->money) { cout << "���ε�����" << endl; }
	else if (S_itemnum < sitemnum) { cout << "�� ���� ������ ���ڶ�" << endl; }
	else
	{
		S_money += sitemnum * A->itemprice;
		S_money -= (sitemnum * A->itemprice) / 10;
		S_itemnum -= sitemnum;
		A->money -= sitemnum * A->itemprice;
		A->itemnum += sitemnum;
		A->tax += (sitemnum * A->itemprice) / 10;
		price = A->itemprice;
		cout << "�Ǹ�" << endl;
		cout << "-----------------" << endl;
	}
}

