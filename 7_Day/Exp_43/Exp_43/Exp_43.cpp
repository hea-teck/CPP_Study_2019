// Exp_43.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdio.h"

typedef int Point[2];
typedef Point *PointPtr;

int main()
{
	Point p = { 3,4 };
	PointPtr pp = &p;

	printf("%d %d %d\n", **pp, (*pp)[0], (*pp)[1]);
}

