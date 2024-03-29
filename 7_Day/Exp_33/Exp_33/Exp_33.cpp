// Exp_33.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdio.h"

// call-by-value
// call-by-reference

void swap(int *x, int *y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

int main()
{
	int a, b;

	scanf("%d%d", &a, &b);

	swap(&a, &b);

	printf("a = %d, b=%d\n", a, b);
}

