#pragma once
#include "pch.h"
#include "buyer.h"


//������
using namespace std;

BUYER::BUYER(unsigned int b_money, unsigned int b_itemnum) : MER(b_money,b_itemnum)
{
	if (b_money < 0 || b_itemnum < 0)
	{
		assert(false);
	}
}


void BUYER::buy(int a_Count,MER& A)//����¾�,����� ����,
{
	if (A.FindSeller(a_Count))
	{
		std::cout << "������ �������� �ʽ��ϴ�." << std::endl;
		return;
	}

	if (money < A.GetSeller()->PRICE()* a_Count)
	{
		std::cout << "�������� �����մϴ�." << std::endl;
		return;
	}

	money -= A.GetSeller()->PRICE()* a_Count;
	itemnum += a_Count;

	A.Deal(a_Count);
	
}


