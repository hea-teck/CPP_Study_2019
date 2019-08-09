#include "stdafx.h"
#include "stdio.h"

// 시프트 (shift) : 옮기다
// << : 왼쪽으로 시프트
// >> : 오른쪽으로 시프트

int main() {
	char a = 22;

	printf("%d\n", a << 1);
	printf("%d\n", a << 3);
	printf("%d\n", a << 6);
	printf("%d\n", a >> 1);
	printf("%d\n", a >> 3);
	printf("%d\n", a >> 6);
}