// Exp_07.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.

#include "stdafx.h"

#include <stdio.h>

int main()
{
	/*
	int a, b;

	// scanf -> Space or Enter 알아서 식별하여 %d 할당.
	scanf("%d %d", &a, &b); // &: 포인터

	int hap = a + b;
	int cha = a - b;
	int gop = a * b;
	int mok = a / b;

	printf("%d + %d = %d\n", a, b, hap);
	printf("%d - %d = %d\n", a, b, cha);
	printf("%d * %d = %d\n", a, b, gop);
	printf("%d / %d = %d\n", a, b, mok);
	*/

	float a, b;

	scanf("&f &f", &a, &b);

	float hap = a + b;
	float cha = a - b;
	float gop = a * b;
	float mok = a / b;

	printf("%f + %f = %f\n", a, b, hap);
	printf("%f - %f = %f\n", a, b, cha);
	printf("%f * %f = %f\n", a, b, gop);
	printf("%d / %f = %f\n", a, b, mok);



}

