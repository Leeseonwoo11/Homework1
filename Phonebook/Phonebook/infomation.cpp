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
	cout <<"이름: "<<GetName() << endl;
	cout <<"전호번호: "<<GetPhoneNumber() << endl;
	cout<<"주소: " <<GetAddress() <<endl;
	cout<<"이메일: "<<GetEmailAdress() <<endl;
	cout <<"직업: " << Getjob() << endl;
	cout << "--------------------" << endl;
	cout << endl;

}



