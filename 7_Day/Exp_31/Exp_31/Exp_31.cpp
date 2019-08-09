// Exp_31.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdio.h"

// 전역변수
int itemCnt = 0;
int money = 100;


void buyItem(int cost, int cnt) {

	// 아이템을 산다.
	itemCnt += cnt;
	money -= cost;
	printf("아이템을 구매했습니다.\n");
	printf("  아이템 개수: %d\n", itemCnt);
	printf("  잔액: %d\n", money);

}

int main()
{
	buyItem(30, 5);

	/*중략*/

	buyItem(50, 7);
}

