// Phonebook.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include "infomation.h"
#include <iostream>
#include "background.h"

int main()
{

	std::vector<infomation> A;
	

	while (1)
	{
		int aaa = menu();
		switch (aaa)
		{
		case 1: //전화번호 추가
			AddPhoneNumver(A);
			break;
		case 2: //전화번호 찾기
			SearchTool(A);
			break;
		case 3: //전화번호 수정하기
			RivisePhoneNumber(A);
			break;
		case 4: //전화번호부 목록 모두 열기
			Open_all_number(A);
			break;
		case 5: //나가기
			goto endloop;
		break;


		}
	}
endloop:;




}

