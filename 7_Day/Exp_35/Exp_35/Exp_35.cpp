// Exp_35.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdio.h"

// 재귀함수
// recursion

void rec(int n) {
	if (n > 5) return;
	printf("n = %d\n", n);
	rec(n + 1);
}

int main()
{
	rec(1);
}

