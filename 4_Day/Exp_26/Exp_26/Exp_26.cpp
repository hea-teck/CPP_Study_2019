// Exp_26.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include <stdio.h>

int main()
{
	int arr[3] = { 1,2,3 };
	int *ptr = arr; // ptr = arr

	for (int i = 0; i < 3; i++) {
		printf("%d", *(ptr + i));
	//	printf("%d", *(arr + i));
	}
	printf("\n");

	for (int i = 0; i < 3; i++) {
		printf("%d", ptr[i]);
	//	printf("%d", *(arr + i));
	}
	printf("\n");

}

