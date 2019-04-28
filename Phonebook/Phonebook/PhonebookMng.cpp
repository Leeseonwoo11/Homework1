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
		std::cout << "����ó�� ���������ʴ� �̸��Դϴ�." << std::endl;
		return true;
	}

	m_NowPBook = itr->second;


	return false;
}

void PhonebookMng::InsertNumber()
{
	std::string  strName = "";
	std::cout << "�̸��� �Է����ּ���" << std::endl;
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
		std::cout << "�̹� ��ϵ� �̸��Դϴ�. " << std::endl;
	}

}

void PhonebookMng::ShowAll() const
{
	if (m_PhoneBook.empty())
	{
		std::cout << "����ֽ��ϴ�." << std::endl;
		return;
	}
	for (auto i : m_PhoneBook)
	{
		i.second->info();
	}
}

void PhonebookMng::Init()
{
	m_PhoneBook.insert(Key("ȫ�浿", new PhoneBook("ȫ�浿")));
	m_PhoneBook["ȫ�浿"]->SetTest("ȫ�浿","010-1111-2222");
	m_PhoneBook["ȫ�浿"]->info();
	m_PhoneBook.insert(Key("��浿", new PhoneBook("��浿")));
	m_PhoneBook["��浿"]->SetTest("��浿", "010-3333-4444");
	m_PhoneBook["��浿"]->info();
}

