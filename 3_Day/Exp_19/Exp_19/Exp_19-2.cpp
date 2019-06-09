#include "stdafx.h"

#include <stdio.h>

// 자연수 입력 : 12
// 1, 2, 3, 4, 6, 12

int main() {

	int n;

	printf("자연수를 입력 : ");
	scanf("%d", &n);

	for (int i = 1; i <= n / 2; i++) {
		if (n%i == 0) {
			printf("%d,", i);
		}
	}printf("%d\n", n);

}