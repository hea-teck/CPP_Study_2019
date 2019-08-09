#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"

// exit(0); 그냥 바로 종료.

int main() {
	int sum = 0;

	for (int i = 0; i < 5; i++) { // n과 무관하게 그냥 5번 입력할 수 있도록, i를 5번 루프돌림.
		int n;

		scanf("%d", &n);

		if (n <= 0) {
			printf("INPUT ERROR\n");
			exit(0);
		}
		sum += n;
	}
	printf("%d\n", sum);
}