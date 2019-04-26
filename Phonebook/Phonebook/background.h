#pragma once
#include "infomation.h"
#include <iostream>
#include <string>
#include <vector>


int menu()
{
	std::cout << "1. ��ȭ��ȣ�߰�" << std::endl; //addphonenumver
	std::cout << "2. ��ȭ��ȣã��" << std::endl; //searchName or searchNumber.
	std::cout << "3. ��ȭ��ȣ�� ����" << std::endl; //
	std::cout << "4. ��ȭ��ȣ�� ���" << std::endl; //info
	std::cout << "5. ������" << std::endl; //exit
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
	cout << "�̸��Է�: ";
	cin >> _in_name;
	cout << endl;
	cout << "��ȣ�Է�:  ";
	cin >> _in_number;
	cout << endl;


	if (SearchName(_in_name, phonebok) && SearchNumber(_in_number, phonebok))
	{
		infomation pp(_in_name, _in_number);
		phonebok.push_back(pp);
	}
	else
	{
		cout << "�̸��̳� ��ȣ�� �ߺ��˴ϴ�." << endl;
		goto readd;
	}

}

void RivisePhoneNumber(std::vector<infomation>&phonebok)
{
	string original_name;
	string rivise_name;
	string revise_number;
	cout << "�����Ϸ��� �̸�";
	cin >> original_name;
	cout << endl;
	if (SearchName(original_name, phonebok) == -1)
	{
		cout << "���� �̸��Դϴ�." << endl;
	}
	else
	{
		cout << "����� �̸�: ";
		cin >> rivise_name;
		cout << endl;
		cout << "����� ��ȣ: ";
		cin >> revise_number;
		cout << endl;

		phonebok[SearchName(original_name, phonebok)].SetNumber(revise_number); //���� �ٲٸ� �̸��� �ٲ�������
		phonebok[SearchName(original_name, phonebok)].SetName(rivise_name);     //�ε����� ��ã�� ������.
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
	
	cout << "1. �̸�����ã��" << endl;
	cout<< "2. ��ȣ��ã��" << endl;
	cin >> i;

	if (i == 1)
	{
		cout << "�̸��� �Է��ϼ���" << endl;
		cin >> name;
		bb=SearchName(name, phonebok);
		phonebok[bb].info();
	}
	else if (i == 2)
	{
		cout << "��ȣ�� �Է��ϼ���" << endl;
		cin >> number;
		bb = SearchNumber(number, phonebok);
		phonebok[bb].info();
	}

}