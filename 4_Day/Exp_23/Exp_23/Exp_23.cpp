// Exp_23.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include <stdio.h>

int main()
{

	// '\0' 널 문자 (문자열의 끝을 알리는 것)
	// 배열의 길이가 +1 이 되는 이유

	/*
	char arr[] = "Hello, World!"; // 큰 따옴표 이용

	printf("배열의 크기 : %d\n", sizeof(arr) / sizeof(char));

	printf("%s\n", arr);
	*/

	// string을 입력을 받을 경우 - &를 쓰지 않는다.

	char s[100];

	scanf("%s", s);
	printf("%s\n", s);


}

