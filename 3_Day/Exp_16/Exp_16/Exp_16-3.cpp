#include "stdafx.h"

#include <stdio.h>

int main() {

	// 1~n까지 숫자의 합을 출력

	int n;
	scanf("%d", &n);

	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}

	printf("%d", sum);
}