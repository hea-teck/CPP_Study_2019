// Exp_38.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdio.h"

// typedef
// 형을 정의

int main()
{
	typedef int Int32; // int를 Int32로 취급하겠다.
	Int32 n = 20;

	printf("%d\n", n);
	printf("%d\n", sizeof(Int32));
}

