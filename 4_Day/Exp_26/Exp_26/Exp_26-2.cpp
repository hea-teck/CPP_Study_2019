#include "stdafx.h"

#include <stdio.h>

/*

	1. arr = &arr[0]
	    ptr = &ptr[0]

	2. *ptr = ptr[0]

	3. ptr + 1 = ptr에  sizeof(*ptr)을 더한 값
	   
*/

int main() {
	int arr[3] = { 1,2,3 }; // 총 12바이트

	printf("arr = %d\n", arr);
	printf("arr + 1 = %d\n", arr + 1);

	printf("&arr = %d\n", &arr); // 전체 배열의 주소값은 [0]번째 인자가 갖는 주소값과 동일
	printf("&arr + 1 = %d\n", &arr + 1); // 다음 배열로 넘어가는 것을 의미. 즉 +12바이트.
}