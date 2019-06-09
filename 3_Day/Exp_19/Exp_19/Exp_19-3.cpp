#include "stdafx.h"

#include <stdio.h>

// 일의 자릿수가 3, 6, 9인 경우 * 출력
// 1 2 * 4 5 * 7 8 * 10 11 12 * 14 15 * 17 ...

int main() {
	int n;
	scanf("%d", &n);

	/*
	for (int i = 1; i <= n; i++) {
	if ( i % 3 == 0 && i <= 10) {
	printf("*");
	}
	else if (i % 3 == 1 && i > 10) {
	printf("*");
	}
	else if (i % 3 == 2 && i > 20) {
	printf("*");
	}else
	printf("%d", i);
	}

	3의로 나눈 나머지의 값이 0 -> 1-> 2 ... (자릿수 증가에 따라)

	*/

	for (int i = 1; i <= n; i++) {
		int k = i % 10;
		if (k == 3 || k == 6 || k == 9) {
			printf("* ");
		}
		else
			printf("%d ", i);
	}
	printf("\n");


}
