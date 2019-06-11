#include "stdafx.h"

#include <stdio.h>

int main() {
	int arr[5] = { 3,1,4,1,5 };
	
	// 위 예제에 따르면
	// sizeof(arr) / sizeof(int) = 20 / 4 = 5
	// 즉 배열의 크기를 알 수 있다.

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d", arr[i]);
	}
	printf("\n");
}