#include "stdafx.h"
#include "stdio.h"

int main() {
	typedef int Pair[2]; // 크기 2인 int형 배열 생성. 배열 이름은 Pair. int를 Pair[2]로 취급하겠다.
	Pair point = { 3,4 }; // int point[2] = {3,4}; Pare[2]까지 쓸 필요 없이, Pair만 써도 ok

	printf("(%d, %d)\n", point[0], point[1]);
}