// Phonebook.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include "infomation.h"
#include <iostream>
#include "background.h"

int main()
{

	std::vector<infomation> A;
	
	AddPhoneNumver(A);
	Open_all_number(A);
	RivisePhoneNumber(A);
	Open_all_number(A);



}

