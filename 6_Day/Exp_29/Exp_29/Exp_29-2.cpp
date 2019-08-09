#include "stdafx.h"
#include "stdio.h"

int main() {

	int a = 10;
	int b = 20;

	int *ptr; // int형 변수를 가리키는 포인터 변수 ptr 생성

	ptr = &a; // 포인터 변수 ptr은 a를 가리키고 있음
	*ptr = 30; // 포인터 변수 ptr이 가리키는 a의 값을 30으로 설정. 즉 a=30

	ptr = &b; // 포인터 변수 ptr은 b를 가리키는 것으로 변경
	*ptr = 10; // 포인터 변수 ptr이 가리키는 b의 값을 10으로 설정. 즉 b=10

	printf("%d\n", a); // 30
	printf("%d\n", b); // 10
	printf("%d\n", *ptr); // 10

}