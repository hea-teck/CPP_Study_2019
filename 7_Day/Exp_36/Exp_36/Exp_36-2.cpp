#include "stdafx.h"
#include "stdio.h"

// call-by-reference : ÂüÁ¶

void printArr(int (*arr)[3]) { // (*arr)[3] == arr[2][3]
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int arr[2][3] = { {1,2,3}, {4,5,6} };
	printArr(&arr[0]); // &arr[0] == arr
}