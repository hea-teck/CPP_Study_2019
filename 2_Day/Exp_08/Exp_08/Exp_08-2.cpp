#include "stdafx.h"

#include <stdio.h>

int main() {

	char a;

	printf("문자 입력 : ");
	scanf("%c", &a);
	printf("%c의 ASCII 값 : %d\n", a, a);

	int b;

	printf("숫자 입력 : ");
	scanf("%d", &b);
	printf("%d의 ASCII 문자는 %c \n", b, b);
}