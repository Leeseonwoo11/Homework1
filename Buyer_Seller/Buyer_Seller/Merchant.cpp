#pragma once
#include "pch.h"
#include "Merchant.h"

using namespace std;


MER::~MER()
{
	if (!m_vSeller.empty())
	{
		for (auto i : m_vSeller)
		{
			delete i;
			i = nullptr;
		}
		m_vSeller.clear();
	}
}

MER::MER(unsigned int m_money, unsigned int a_itemnum, unsigned  int a_itemprice) :
	money(m_money), itemprice(a_itemprice), itemnum(a_itemnum)
{
	if (money < 0 || itemprice < 0 || itemnum < 0)
	{
		assert(false);

	}
}

MER MER::operator+(MER A)
{

	int a = money + A.money;
	int b = (itemprice + A.itemprice) / 2;
	int c = itemnum + A.itemnum;
	MER MYMER(a, b, c);
	return MYMER;

}

MER & MER::operator+=(MER A)
{
	money += A.money;
	itemprice = A.itemprice;
	itemnum += A.itemnum;
	return *this;
}

void MER::info()
{
	cout << Name() << endl;;
	cout << "돈:" << money << endl;
	cout << "아이템개수" << itemnum << endl;
	cout << "아이템가격" << itemprice << endl;
	cout << "-----------------" << endl;

}

int MER::MONEY()		const { return money; }
int MER::ITEMNUM()	const { return itemnum; }
int MER::PRICE()			const { return itemprice; }

SELLER * MER::GetSeller()
{
	if (m_NowSeller == nullptr)
		assert(false && "Arg Error");

	return m_NowSeller;
}

void MER::Add(SELLER * tmp)
{
	if (tmp == nullptr)
		assert(false && "Arg Error");
	m_vSeller.emplace_back(tmp);
}

void MER::Deal(int a_Count)
{
	m_NowSeller->sell(a_Count);
	money = (a_Count * m_NowSeller->PRICE()) / 10;

	m_NowSeller = nullptr;
}

bool MER::FindSeller(int a_Val) 
{
	if (m_vSeller.empty()) {
		std::cout << "상인이 존재하지 않습니다" << std::endl;
		return true;
	}
	for (auto i : m_vSeller)
	{
		if (i->ITEMNUM() > a_Val) {
			m_NowSeller = i;
			break;
		}
	}
	if (m_NowSeller != nullptr)
		return false;

	return true;
}












