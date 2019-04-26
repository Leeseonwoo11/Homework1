#pragma once
#include "infomation.h"
#include <iostream>
#include <string>
#include <vector>


int menu()
{
	std::cout << "1. 전화번호추가" << std::endl; //addphonenumver
	std::cout << "2. 전화번호찾기" << std::endl; //searchName or searchNumber.
	std::cout << "3. 전화번호부 수정" << std::endl; //
	std::cout << "4. 전화번호부 목록" << std::endl; //info
	std::cout << "5. 나가기" << std::endl; //exit
	int n;
	cin >> n;
	return n;
}


int SearchName(string __name, std::vector<infomation> &phonebok)
{
	for (int i = 0; i < phonebok.size(); i++)
	{
		if (__name == phonebok[i].GetName())
		{
			return i;
		}
		else
		{
			return -1;
		}
	}

}
int SearchNumber(string __number, std::vector<infomation> &phonebok)
{
	for (int i = 0; i < phonebok.size(); i++)
	{
		if (__number == phonebok[i].GetPhoneNumber())
		{
			return i;
		}
		else
			return -1;
	}

}
void AddPhoneNumver(std::vector<infomation> &phonebok)
{
readd:
	string _in_name;
	string _in_number;
	cout << "이름입력: ";
	cin >> _in_name;
	cout << endl;
	cout << "번호입력:  ";
	cin >> _in_number;
	cout << endl;


	if (SearchName(_in_name, phonebok) && SearchNumber(_in_number, phonebok))
	{
		infomation pp(_in_name, _in_number);
		phonebok.push_back(pp);
	}
	else
	{
		cout << "이름이나 번호가 중복됩니다." << endl;
		goto readd;
	}

}

void RivisePhoneNumber(std::vector<infomation>&phonebok)
{
	string original_name;
	string rivise_name;
	string revise_number;
	cout << "수정하려는 이름";
	cin >> original_name;
	cout << endl;
	if (SearchName(original_name, phonebok) == -1)
	{
		cout << "없는 이름입니다." << endl;
	}
	else
	{
		cout << "변경될 이름: ";
		cin >> rivise_name;
		cout << endl;
		cout << "변경될 번호: ";
		cin >> revise_number;
		cout << endl;

		phonebok[SearchName(original_name, phonebok)].SetNumber(revise_number); //순서 바꾸면 이름이 바뀌어버려서
		phonebok[SearchName(original_name, phonebok)].SetName(rivise_name);     //인덱스를 못찾고 터진다.
	}

}


void Open_all_number(std::vector<infomation> &phonebook)
{
	for (int i = 0; i < phonebook.size(); i++)

	{
		phonebook[i].info();
	}
}


void SearchTool(std::vector<infomation> &phonebok)
{
	int i;
	int bb;
	string name;
	string number;
	
	cout << "1. 이름으로찾기" << endl;
	cout<< "2. 번호로찾기" << endl;
	cin >> i;

	if (i == 1)
	{
		cout << "이름을 입력하세요" << endl;
		cin >> name;
		bb=SearchName(name, phonebok);
		phonebok[bb].info();
	}
	else if (i == 2)
	{
		cout << "번호를 입력하세요" << endl;
		cin >> number;
		bb = SearchNumber(number, phonebok);
		phonebok[bb].info();
	}

}