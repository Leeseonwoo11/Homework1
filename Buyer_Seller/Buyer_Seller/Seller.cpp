#pragma once
#include "pch.h"


using namespace std;


SELLER::SELLER(unsigned int s_money, unsigned  int s_itemnum)
	: MER(s_money, s_itemnum)
{
}



void SELLER::sell(int a_Count)//�ȷ��� ��, �ȷ��� ����
{
	if (itemnum < a_Count) { cout << "�� ���� ������ ���ڶ�" << endl; return; }
	
	itemnum -= a_Count;
	money += a_Count * itemprice;

}

