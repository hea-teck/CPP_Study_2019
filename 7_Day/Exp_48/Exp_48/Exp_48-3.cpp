#include "stdafx.h"
#include "stdio.h"

// 난수

#include "stdlib.h"
#include "time.h"

int main() {
	
	srand(time(NULL));

	// printf("%d\n", time(NULL)); // 현재시각 반환 : 1970/01/01 00:00:00로부터 지난 시간, 초 단위

	for (int i = 1; i <= 10; i++) {
		printf("%d\n", rand() % 10 + 1);
	}
}