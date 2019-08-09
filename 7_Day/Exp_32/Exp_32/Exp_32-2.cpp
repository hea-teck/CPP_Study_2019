#include "stdafx.h"
#include "stdio.h"

int noMeaning() {
	printf("first\n");
	return 1; // 어떤위치든 return을 한번 만나게 되면 함수를 빠져나가게 된다. 즉 아래 명령어 실행 X

	printf("second\n");
	return 2;
}

/*
void noMeaning() {
	printf("first\n");
	return; 

	printf("second\n");
	return;
}
*/

int main() {
	int a;
	a = noMeaning();

	printf("반환된 값 : %d\n", a);

}