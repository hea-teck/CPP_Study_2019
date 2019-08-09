#include "stdafx.h"
#include "stdio.h"

struct ProductInfo {
	int num;
	char name[100];
	int cost;
};

// call-by-reference

void productSale(ProductInfo *p, int percent) {
	p->cost -= p->cost * percent / 100;
}

int main()
{
	ProductInfo myProduct{ 4797283, "���� �Ѷ��", 20000 };

	productSale(&myProduct, 10);

	printf("��ǰ ��ȣ : %d\n", myProduct.num);
	printf("��ǰ �̸� : %s\n", myProduct.name);
	printf("��       �� : %d\n", myProduct.cost);
}

