// Exp_32.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdio.h"

// 2개의 매개변수(정수)의 합을 반환

int plus(int a, int b) {
	return a + b;
}

int main()
{
	int sum = plus(3, 5);
	printf("%d\n", sum);

	return 0; // main()은 자동으로 0을 return해줌
}

