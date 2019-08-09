// Exp_28.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdio.h"

// 배열 포인터 : 배열을 가리키는 포인터
// 포인터 배열 : 포인터들이 배열로 구성

int main()
{
	
	int arr[4] = { 1,2,3,4 };
	int *ptr[4];

	for (int i = 0; i < 4; i++) {
		ptr[i] = &arr[i];
	}

	for (int i = 0; i < 4; i++) {
		printf("%d", *ptr[i]);
	}
	printf("\n");


}

