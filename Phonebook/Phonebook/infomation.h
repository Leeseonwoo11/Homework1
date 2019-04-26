#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class infomation
{
private:
	string Name;
	string Phonenumber;


public:

	infomation(string _Name, string _number) :Name(_Name),Phonenumber(_number) {}

	void SetName(string _name)
	{
		Name = _name;
	}
	void SetNumber(string _number)
	{
		Phonenumber = _number;
	}
	string GetName()
	{
		return Name;
	}

	string GetPhoneNumber()
	{
		return Phonenumber;
	}



	void info();

	

};

