#include "stdafx.h"

#include <stdio.h>

int main() {
	int a = 10;

	int *ptr;
	ptr = &a; // ptr이 변수 a를 가리키고 있는 상태

	printf("a의 값 : %d\n", a);

	*ptr = 20; // a = 20과 동일한 의미

	printf("a의 값 : %d\n", a);

}