#include "stdafx.h"
#include "stdio.h"

/*
문자열을 매개변수로 받아 그 문자열에서 공백을 제거하여 출력하는 함수를 작성해보세요.
*/

void print_noSpace(const char str[]) { // 문자열을 char형의 배열로 취급.
	for (int i = 0; str[i] != '\0'; i++) { // 문자열은 마지막에 널문자가 존재.
		if (str[i] != ' ') { // 공백 제거 과정.
			printf("%c", str[i]); // 문자열을 하나의 문자로 나눠서 작업.
		}
	}
}

int main() {
	print_noSpace("Hello, World!\n");
	print_noSpace("My name is Huitaek\n");
}

//https://comfun.tistory.com/entry/printf-function%ED%95%A8%EC%88%98-s-c%EC%B0%A8%EC%9D%B4