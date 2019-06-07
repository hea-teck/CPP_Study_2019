#include "stdafx.h"

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	if (n > 0) {
		printf("n은 양수\n");
	}
	else if (n == 0) {
		printf("n은 0\n");
	}
	else {
		printf("n은 음수\n");
	}
}