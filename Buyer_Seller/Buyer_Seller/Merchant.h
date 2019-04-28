#pragma once
#include "pch.h"


enum class sayul
{
	per = 10,
};



class MER//상인 클래스
{

	std::vector<class SELLER* >  m_vSeller;

	class SELLER * m_NowSeller = nullptr;

protected:

	int money = 0;
	int itemprice = 0;
	int itemnum = 0;

public:


	MER() = default;
	~MER();
	MER(unsigned int m_money, unsigned int a_itemnum, unsigned  int a_itemprice=10);
	MER operator+(MER A);

	MER& operator +=(MER A);


	void info();

	int MONEY() const;
	int ITEMNUM() const;
	int PRICE() const;
	SELLER * GetSeller();

	void Add(SELLER* tmp);
	void Deal(int a_Count);
	bool FindSeller(int a_Val);

	virtual const char* Name()
	{
		return "상인";
	}

};

