// ConsoleApplication22.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include "seller.h"
#include "buyer.h"
#include "Merchant.h"


using namespace std;



int main()
{

	using namespace std;
	MER *C = new MER(10000, 10, 10000);
	SELLER *A = new SELLER(1000, 1000);
	BUYER *B = new BUYER(4000, 2000);

	int i = 0;
	int a, b;
	while (i < 10)
	{
		C->info();

		A->info();
		cin >> a;	
		A->sell(a, C);


		B->info();
		cin >> b;
		B->buy(b, C);

		C->info();
		A->info();
		B->info();
		i++;
	}






	delete[] A;
	delete[] B;
	delete[] C;

}