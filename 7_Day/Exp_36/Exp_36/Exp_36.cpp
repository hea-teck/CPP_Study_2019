// Exp_36.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdio.h"

// call-by-reference : 참조

void printArr(int *arr) { // *arr == arr[4]
	for (int i = 0; i < 4; i++) {
		arr[i] *= 2; // arr[i] == *(arr + i)
	}
}

int main()
{
	int arr[4] = { 1,2,3,4 };
	printArr(&arr[0]); // &arr[0] == arr 	
	for (int i = 0; i < 4; i++) {
		printf("%d ", arr[i]);
	}
}

