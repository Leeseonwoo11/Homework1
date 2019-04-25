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



void SELLER::sell(int sitemnum, MER* A)//�ȷ��� ��, �ȷ��� ����
{
	if (sitemnum * A->itemprice > A->money) { cout << "���ε�����" << endl; }
	else if (S_itemnum < sitemnum) { cout << "�� ���� ������ ���ڶ�" << endl; }
	else
	{
		S_money += sitemnum * A->itemprice; //�Ⱦ����� ����*���� ��ŭ �Ǹ��� �� ����
		S_itemnum -= sitemnum; //�� ��ŭ �Ǹ����� ���ǰ������� ����
		price = A->itemprice; //�� ���ǰ��� �������� �޾ƿ�

		A->money -= sitemnum * A->itemprice; //������ ���� �Ǹ��ڰ� �� ���� �縸ŭ ����
		A->itemnum += sitemnum; //������ ���� ������ �Ǹ��ڰ� ��  ���� ������ ���� 


		cout << sitemnum << "�� �Ǹ�" << endl;
		cout << "-----------------" << endl;
	}
}

