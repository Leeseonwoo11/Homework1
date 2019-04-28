#include "pch.h"

PhonebookMng::~PhonebookMng()
{
	if (!m_PhoneBook.empty())
	{
		for (auto i : m_PhoneBook)
		{
			SAFE_DELETE(i.second);
		}
		m_PhoneBook.clear();
	}
}

PhoneBook * PhonebookMng::GetPhoneBook()
{
	if (m_NowPBook == nullptr)
		assert(false && "arg Error");

	return m_NowPBook;
}

bool PhonebookMng::FindNumber(std::string a_Name)
{
	auto itr = m_PhoneBook.find(a_Name);
	if (itr == m_PhoneBook.end())
	{
		std::cout << "연락처에 존재하지않는 이름입니다." << std::endl;
		return true;
	}

	m_NowPBook = itr->second;


	return false;
}

void PhonebookMng::InsertNumber()
{
	std::string  strName = "";
	std::cout << "이름을 입력해주세요" << std::endl;
	std::cin >> strName;
	if (FindNumber(strName))
	{
		PhoneBook * ptmp = new PhoneBook(strName);

		ptmp->SetNumer();
		ptmp->SetAge();
		ptmp->SetGender();
		m_PhoneBook.insert(Key(strName, ptmp));
		m_NowPBook = ptmp;
		ptmp = nullptr;
	}
	else
	{
		std::cout << "이미 등록된 이름입니다. " << std::endl;
	}

}

void PhonebookMng::ShowAll() const
{
	if (m_PhoneBook.empty())
	{
		std::cout << "비어있습니다." << std::endl;
		return;
	}
	for (auto i : m_PhoneBook)
	{
		i.second->info();
	}
}

void PhonebookMng::Init()
{
	m_PhoneBook.insert(Key("홍길동", new PhoneBook("홍길동")));
	m_PhoneBook["홍길동"]->SetTest("홍길동","010-1111-2222");
	m_PhoneBook["홍길동"]->info();
	m_PhoneBook.insert(Key("고길동", new PhoneBook("고길동")));
	m_PhoneBook["고길동"]->SetTest("고길동", "010-3333-4444");
	m_PhoneBook["고길동"]->info();
}

