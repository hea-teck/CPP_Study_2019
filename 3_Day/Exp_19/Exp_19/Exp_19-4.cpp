#include "stdafx.h"

#include <stdio.h>

/*
n = 4
1
1 3
1 3 5
1 3 5 7
*/

int main() {
	int n;
	scanf("%d", &n);

	/* Sol1)

	for (int i = 1; i <= n; i++) {
	for (int j = 1; j <= i; j++) {
	printf("%d", (2*j - 1));
	}
	printf("\n");
	}

	*/

	// Sol2)

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 2 * i + 1; j += 2) {
			printf("%d ", j);
		}
		printf("\n");
	}
}