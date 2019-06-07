// 산술연산자 : 수학적인 연산
// 전치와 후치

#include "stdafx.h"
#include <stdio.h>

int main() {
	int a = 10;
	int b;

	printf("===전/후치 증가 연산 === \n");

	//b = ++a; // a를 먼저 증가시키고 b에 대입해라.

	b = a++; // a를 b에 먼저 대입 후, a를 증가시켜라.

	printf("a : %d\n", a);
	printf("b : %d\n", b);
	
}