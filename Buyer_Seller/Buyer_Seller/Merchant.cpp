#pragma once
#include "pch.h"
#include "Merchant.h"

using namespace std;


MER::MER() { cout << "기본생성자~~" << endl; }
MER::MER(unsigned int m_money, unsigned  int m_itemprice, unsigned int m_itemnum) :money(m_money), itemprice(m_itemprice), itemnum(m_itemnum)
{
	if (money < 0 || itemprice < 0 || itemnum < 0)
	{
		assert(false);

	}
}




int MER::Getitemnum() const
{
	return itemnum;
}

void MER::info()
{
	cout << Name() << endl;;
	cout << "돈:" << MONEY() << endl;
	cout << "아이템개수" << ITEMNUM() << endl;
	cout << "아이템가격" << PRICE() << endl;
	cout << "세금: " << tax << endl;
	cout << "-----------------" << endl;

}











