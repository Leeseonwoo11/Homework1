#include "pch.h"
#include "infomation.h"
using namespace std;



void infomation::injection(string name,string num, string addr, string eaddr, string joob)
{
	Name = name;
	Phonenumber= num;
	Address= addr;
	EmailAddress= eaddr;
	Job=joob;

}

void infomation::info()
{
	cout <<"�̸�: "<<GetName() << endl;
	cout <<"��ȣ��ȣ: "<<GetPhoneNumber() << endl;
	cout<<"�ּ�: " <<GetAddress() <<endl;
	cout<<"�̸���: "<<GetEmailAdress() <<endl;
	cout <<"����: " << Getjob() << endl;
	cout << "--------------------" << endl;
	cout << endl;

}



