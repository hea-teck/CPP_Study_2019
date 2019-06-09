#include "stdafx.h"

#include <stdio.h>

// do-while의 효율성. while의 한계 해결

int main() {
	int n;

	do {
		printf("제발 0을 입력해주세요!!\n");
		scanf("%d", &n);
	} while (n != 0);

	printf("드디어 0을 입력하셨군요!\n");
}