// Exp_30.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdio.h"

int main()
{
	int arr[3][3] = { 0 };

	printf("%d\n", &arr); //100
	printf("%d\n", arr); //100
	printf("%d\n", *arr); //100

	printf("%d\n", &arr[0]); //100
	printf("%d\n", arr[0]); //100
	printf("%d\n", *arr[0]); //0

	printf("%d\n", &arr[0][0]); //100

	printf("%d\n", arr[0][0]); //0
}

