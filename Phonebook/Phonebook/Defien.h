#pragma once

#define SAFE_DELETE(x) { if( (x) != nullptr ){ delete (x);  (x) = nullptr;}}
#define SAFE_DELETE_ARR(x) { if( (x) != nullptr ){ delete[] (x);  (x) = nullptr;}}

enum class eGender
{
	None,
	Male,
	Female,
};


struct PhoneData
{
	std::string m_strName = "";
	std::string m_strNumber = "";
	eGender m_Gender = eGender::None;
	int m_nAge = 0;
};