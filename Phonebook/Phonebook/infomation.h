#pragma once
#include <string>
#include <iostream>
using namespace std;

class infomation
{


public:

	string Phonenumber = "";
	string Address = "";
	string EmailAddress = "";
	string Job = "";

	string GetPhoneNumber()
	{
		return Phonenumber;
	}
	string GetAddress()
	{
		return Address;
	}
	string GetEmailAdress()
	{
		return EmailAddress;
	}
	string Getjob()
	{
		return Job;
	}


	void injection(string num, string addr, string eaddr, string joob);
	void info();

};

