#include "stdafx.h"

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i *= 2) {
		printf("%d\n", i);
	}

	// printf("%d\n", i); // 위 for문 안에 i를 정의한 경우
}