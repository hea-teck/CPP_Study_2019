// Exp_12.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	if (n % 2) {
		printf("n은 홀수\n"); // '1'이므로 참 (홀수)
	}
	else
		printf("n은 짝수\n"); // '0'이므로 거짓 (짝수)
}

