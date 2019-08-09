// Exp_41.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdio.h"

struct ProductInfo {
	int num;
	char name[100];
	int cost;
};

int main()
{
	ProductInfo myProduct{ 4797283, "제주 한라봉", 20000 };
	ProductInfo *ptr_product = &myProduct;

	printf("상품 번호 : %d\n", ptr_product -> num); // (*ptr_product).num과 동일ㅌ
	printf("상품 이름 : %s\n", (*ptr_product).name);
	printf("가       격 : %d\n", (*ptr_product).cost);
}

