// Phonebook.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include "infomation.h"
#include <iostream>

int main()
{
	infomation Lee,hong,kim,choi;
	Lee.injection("이선우", "010-3993-0679", "서울", "sw0679@naver.com", "취준생");
	hong.injection("홍길동", "010-0000-0001", "우산국", "no email", "도적");
	kim.injection("김말이", "010-0010-0010", "시장","kimalri89@gmail.com","분식집운영");
	choi.injection("유진초이", "nophonenumber", "뉴욕", "no email", "미해병대 대위");


	Lee.info();
	hong.info();
	kim.info();
	choi.info();

}

