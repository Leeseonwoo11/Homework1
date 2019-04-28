#pragma once

class PhonebookMng
{
#pragma region SingleTon
	static inline PhonebookMng* m_pInstance = nullptr;

	PhonebookMng() = default;
	~PhonebookMng();

	PhonebookMng operator=(PhonebookMng&) = delete;
	PhonebookMng(PhonebookMng &&) = delete;
	PhonebookMng(const PhonebookMng&) = delete;

public:
	static void CreateInstance()
	{
		if (m_pInstance == nullptr)
		{
			m_pInstance = new PhonebookMng();
		}
	}

	static PhonebookMng* GetInstance()
	{
		return m_pInstance;
	}

	static void ReleaseInstance()
	{
		SAFE_DELETE(m_pInstance);
	}

#pragma endregion
private:
	class PhoneBook * m_NowPBook = nullptr;
	using Key = std::pair<std::string, PhoneBook *>;
	std::map<std::string, PhoneBook *> m_PhoneBook;

	

public:

	PhoneBook * GetPhoneBook();
	bool FindNumber(std::string a_Name);
	void InsertNumber();
	void ShowAll() const;
	void Init();

};

#define InitPBMng() { PhonebookMng::CreateInstance(); PhonebookMng::GetInstance()->Init();}
#define PBMngInstance() (PhonebookMng::GetInstance())
#define ReleaseInstance() (PhonebookMng::ReleaseInstance())