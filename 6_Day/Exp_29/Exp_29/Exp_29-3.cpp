#include "stdafx.h"
#include "stdio.h"

int main() {

	int arr[10] = { 3,1,4,1,5,9,2,6,5,3 };

	printf("%d\n", arr); // arr ==> &arr[0] : ex) 100 °¡Á¤
	for (int i = 3; i < 7; i++) {
		printf("%d, %d\n", arr + i, *(arr + i));
		// 112, 1
		// 116, 5
		// 120, 9
		// 124, 2

	}

}