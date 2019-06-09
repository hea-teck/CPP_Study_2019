#include "stdafx.h"

#include <stdio.h>

/*
n = 4
1
1 2 3
1 2 3 4 5
1 2 3 4 5 6 7

i번째 줄에서 출력되는 숫자의 개수 2*i - 1
*/

int main() {
	int n;
	scanf("%d", &n);

	/* Sol1)

	for (int i = 1; i <= 2*n - 1; i+= 2) {
	for (int j = 1; j <= i; j++) {
	printf("%d ", j);
	}
	printf("\n");
	}

	*/

	// Sol2)

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 2 * i - 1; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}

}