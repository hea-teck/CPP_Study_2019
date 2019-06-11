#include "stdafx.h"

#include <stdio.h>
#include <string.h>

int main() {
	char str[] = "Hello";
	char str2[100];
	
	int len;

	len = strlen(str);

	printf("문자열의 길이는 %d\n", len);

	strcpy(str2, str);

	printf("str2의 값 : %s\n", str2);

}