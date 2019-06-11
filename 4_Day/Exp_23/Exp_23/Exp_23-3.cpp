#include "stdafx.h"

#include <stdio.h>
#include <string.h>

int main() {
	char str[100] = "Hello";
	
	char str1[] = "sample";
	char str2[] = "simple";

	 strcat(str, "World!"); // 문자열 이어서.

	 // str1이 str2보다 사전 순으로 앞 쪽에 있다. -1
	 //                                          뒤 쪽에 있다. 1
	 //                                                     같다. 0

	int cmp = strcmp(str1, str2);

	printf("%s\n", str);

	printf("%d\n", cmp);
}