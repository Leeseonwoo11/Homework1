#pragma once
#include "pch.h"
#include <iostream>
#include <cassert>
#include <vector>
#include <algorithm>

enum class sayul
{
	per = 10,
};



class MER//상인 클래스
{
public:
	int money = 0;
	int itemprice = 0;
	int itemnum = 0;

	MER();
	MER(unsigned int m_money, unsigned  int m_itemprice, unsigned int m_itemnum);
	MER operator +(MER A)
	{
		int a = money + A.money;
		int b = (itemprice + A.itemprice) / 2;
		int c = itemnum + A.itemnum;
		MER MYMER(a, b, c);
		return MYMER;
	}
	MER& operator +=(MER A) 
	{
		money += A.money;
		itemprice = A.itemprice;
		itemnum += A.itemnum;
		return *this;
	}

	int Getitemnum() const;
	void info();
	virtual int MONEY() { return money; }
	virtual int ITEMNUM() { return itemnum; }
	virtual int PRICE() { return itemprice; }
	virtual const char* Name()
	{
		return "상인";
	}

};

