#include "stdafx.h"

#include <stdio.h>

int main() {

	int arr[3] = { 1,2,3 };

	int(*ptr_arr)[3]; // 길이 3인 int형 배열을 가르키는 포인터를 선언
	ptr_arr = &arr; // 포인터에 배열의 주소값을 할당. 즉 arr[0] 주소값

	for (int i = 0; i < 3; i++) {
		printf("%d\n", (*ptr_arr)[i]);
	}
}