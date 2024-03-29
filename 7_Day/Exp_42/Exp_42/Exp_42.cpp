// Exp_42.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

// 1*3600 + 22*60 + 48초
// 1시간 = 60분 = 3600초
// 1분 = 60초

#include "stdafx.h"
#include "stdio.h"

/*struct Time {
	int h, m, s;
};

int totalSec(Time t) {
	return 3600 * t.h + 60 * t.m + t.s;
}

int main()
{
	Time t = { 1,22,48 };
	printf("%d\n", totalSec(t));
}*/

struct Time {
	int h, m, s;

	int totalSec() {
		return 3600 * h + 60 * m + s;
	}
};

int main()
{
	Time t = { 1,22,48 };
	printf("%d\n", t.totalSec());
}

