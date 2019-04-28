// ConsoleApplication22.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"




using namespace std;



int main()
{
	MER Market;
	BUYER YG(20000, 0);
	for (int i = 0; i < 10; i++)
	{
		Market.Add(new SELLER(i*100, i*10));
	}
	
	YG.info();

	for (int i = 0; i < 40; i++)
	{
		YG.buy(10, Market);

		YG.info();

	}
	
	/*
	using namespace std;
	MER *C = new MER(10000, 10000, 10);// 상인 : 재산:10000원, 가격:개당10원,  재고 10000개
	SELLER *A = new SELLER(1000, 1000);// 셀러 : 재산:1000원, 재고: 1000개
	BUYER *B = new BUYER(4000, 20);// 바이어 : 재산 4000원, 재고 20개



	int i = 0;
	int a=0, b=0;
	while (i < 100)
	{
		cout << "-----------------------------" << endl;
		C->info();
		A->info();
		B->info();

			
		A->sell(a, C); // 셀러  A가 상인 C에게 a개 판다.
		B->buy(b, C); //  바이어 B가 상인 C에게 b개 산다.
		i++;
		a++;
		b++;
	
		
	}






	delete[] A;//메모리 삭제
	delete[] B;//메모리 삭제
	delete[] C;//메모리 삭제
	*/
}