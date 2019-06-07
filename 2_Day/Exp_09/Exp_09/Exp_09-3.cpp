// 알파벳을 입력받아서 그 다음 알파벳을 출력하는 프로그램을 만들어 보세요. (Z제외)

#include "stdafx.h"

#include <stdio.h>

int main() {
	char alphabet;

	printf("알파벳을 입력하세요.\n");
	scanf("%c", &alphabet);

	printf("그 다음 알파벳은 %c 입니다.\n", alphabet + 1);
}