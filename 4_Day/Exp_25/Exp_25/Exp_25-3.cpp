#include "stdafx.h"

#include <stdio.h>

int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	for (int i = 0; i < 10; i++) {
		printf("%d ", *(arr + i)); // arr = &arr[0] , 즉 배열의 i번째의 값을 출력해라. 이때 포인터는 각 주소값의 값을 의미
	}
	printf("\n");

	// arr = &arr[0], 즉 포인터변수 ptr은 초기 값 &arr[0] 으로 선언. '&arr[0] + 9' 경계 마지막. ptr++은 &arr[0] + 1 즉 arr + 1 이다. 다음 칸으로 넘어가는 의미를 나타냄.
	for (int *ptr = arr; ptr < arr + 10; ptr++) {
		printf("%d ", *ptr); 
	}
	printf("\n");

}