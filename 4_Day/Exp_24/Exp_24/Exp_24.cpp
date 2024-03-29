// Exp_24.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include <stdio.h>

// 포인터 : 변수의 주소를 저장하는 변수!!!

int main()
{
	int a = 20;

	// 앞에 *를 쓰는 이유는 ptr_a 변수가 포인터를 나타낸다는 것을 PC에게 전달하는 것
	// 포인터 변수 선언 (가리킬 변수 형태를 앞에 쓰는 것임. / ex. int)
	int *ptr_a; 
	
	// ptr이 변수 a를 가리키고 있는 상태
	// a의 주소값을 ptr_a에 할당 (&는 주소값을 얻어올 때 사용)
	ptr_a = &a; 

	printf("a의 값 : %d\n", a);
	printf("a의 주소값 : %d\n", &a);
	printf("ptr_a에 저장된 값 : %d\n", ptr_a);
	printf("ptr_a가 가르키는 변수의 값 : %d\n", *ptr_a); // *ptr_a = a 동일한 의미

}

