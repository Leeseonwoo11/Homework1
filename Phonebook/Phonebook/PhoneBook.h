#pragma once

class PhoneBook
{
	PhoneData m_Data;

public:
	PhoneBook()=default;
	PhoneBook(std::string a_name);
	~PhoneBook();
	
	void SetAge();
	void SetGender();
	void SetNumer();

	void info() const;
	void ShowGender() const ;
//테스트용;
	void SetTest(std::string a_Name, std::string a_Number);
};

