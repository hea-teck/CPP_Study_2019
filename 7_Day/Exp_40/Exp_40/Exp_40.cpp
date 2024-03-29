// Exp_40.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdio.h"

struct ProductInfo {
	int num; // 4바이트
	char name[100]; // 100바이트
	int cost; // 4바이트
};

int main()
{
	ProductInfo myProduct = { 789283, "제주 한라봉", 19900 }; // myProduct라는 구조체 변수 설정

	printf("상품 번호 : %d\n", myProduct.num);
	printf("상품 이름 : %s\n", myProduct.name);
	printf("가       격 : %d원\n", myProduct.cost);

	printf("sizeof(myProduct) = %d\n", sizeof(myProduct));

	printf("상품 번호 : %d\n", &myProduct.num);
	printf("상품 이름 : %d\n", myProduct.name);
	printf("가       격 : %d\n", &myProduct.cost);

	printf("%d", &myProduct);
}

