// Exp_25.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include <stdio.h>

int main()
{
	int a = 10;
	int *ptr_a = &a;

	printf("ptr_a의 값 : %d\n", ptr_a);
	printf("ptr_a + 1의 값 : %d\n", ptr_a + 1);

	// +1 의미는 다음 칸의 주소값으로 넘어가는 것을 의미

}

