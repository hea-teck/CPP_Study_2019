// Exp_27.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdio.h"

int main()
{
	int arr[2][3] = { {1,2,3}, {4,5,6} };
	
	/*
	printf("%d\n", sizeof(arr)); // 24
	printf("%d\n", sizeof(arr[0])); // 12
	printf("%d\n", sizeof(arr[0][0])); // 4

	printf("%d\n", &arr); // 123456
	printf("%d\n", &arr[0]); // 123456
	printf("%d\n", &arr[0][0]); // 123456
	*/

	int(*ptr)[3] = arr;

	// 1. ptr[i] == arr[i]
	// 2. ptr[i][j] == arr[i][j]
	// ptr == arr

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d", ptr[i][j]);
		}
		printf("\n");
	}

}

