#include "stdafx.h"

#include <stdio.h>

// 2^0 = 1
// 2^1 = 2
// 2^2 = 4
// .....
// 2^6 = 64

int main() {

	int n;
	scanf("%d", &n);

	for (int i = 0, t = 1; i <= n; i++, t *= 2) {
		printf("2^%d=%d\n", i, t);
	}

	/*
	while (i <= n) {
	printf("2^%d=%d\n", i, t);
	i++;
	t *= 2;
	}
	*/
}