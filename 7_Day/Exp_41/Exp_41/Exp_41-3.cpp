#include "stdafx.h"
#include "stdio.h"

struct ProductInfo {
	int num;
	char name[100];
	int cost;
};

void productSwap(ProductInfo *a, ProductInfo *b) {
	ProductInfo tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	ProductInfo myProduct{ 4797283, "제주 한라봉", 20000 };
	ProductInfo otherProduct{ 1234567, "성주 꿀참외", 10000 };

	productSwap(&myProduct, &otherProduct);

	printf("상품 번호 : %d\n", myProduct.num);
	printf("상품 이름 : %s\n", myProduct.name);
	printf("가       격 : %d\n", myProduct.cost);
}