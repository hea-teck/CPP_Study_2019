#include "stdafx.h"

#include <stdio.h>

// continue

int main() {
	int n;
	scanf("%d", &n);

	// 1+2+4+5+7+8+10+11+13 .. (3의 배수 제외하고 합)

	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0) {
			continue;
		}
		sum += i;
	}
	printf("%d\n", sum);
}