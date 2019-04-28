#include "pch.h"
#include "PhoneBook.h"




PhoneBook::PhoneBook(std::string a_name)
{
	m_Data.m_strName = a_name;
}

PhoneBook::~PhoneBook()
{
}


void PhoneBook::SetAge()
{
	std::cout << "나이를 입력해주세요. " << std::endl;
	int tmp = 0;
	while (true)
	{
		std::cin >> tmp;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			std::cout << "잘못된 입력입니다. 다시입력해주세요" << std::endl;

		}
		else 
		{
			m_Data.m_nAge = tmp;
			break;
		}
	}
}

void PhoneBook::SetGender()
{
	while (true)
	{
		std::cout << "남성은 1, 여성은 2를 입력해주세요." << std::endl;
		char a;
		std::cin >> a;
		switch (a)
		{
		case '1': {m_Data.m_Gender = eGender::Male; return; }break;
		case '2': {m_Data.m_Gender = eGender::Female; return; }break;
		default:
			std::cout << "잘못된 입력입니다. 다시 입력해주세요." << std::endl;
			break;
		}
	}
}

void PhoneBook::SetNumer()
{
	std::string strNumber = "";
	std::cout << "번호를 입력해주세요." << std::endl;
	std::cin >> strNumber;
	m_Data.m_strNumber = strNumber;
}

void PhoneBook::info() const
{
	std::cout << "=======================================" << std::endl;
	std::cout << "이름 : " << m_Data.m_strName << std::endl;
	std::cout << "전화번호 : " << m_Data.m_strNumber << std::endl;
	std::cout << "나이 : " << m_Data.m_nAge << std::endl;
	ShowGender();
	std::cout << "=======================================" << std::endl;
	std::cout << std::endl;
}

void PhoneBook::ShowGender() const
{
	if ((int)m_Data.m_Gender % 2)
	{
		std::cout << "성별 : 남성 " << std::endl;
	}
	else
	{
		std::cout << "성별 : 여성 " << std::endl;
	}
}

void PhoneBook::SetTest(std::string a_Name, std::string a_Number)
{
	m_Data.m_strName = a_Name;
	m_Data.m_Gender = eGender::Male;
	m_Data.m_nAge = 20;
	m_Data.m_strNumber = a_Number;
}
	
	
