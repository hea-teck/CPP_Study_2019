// Exp_34.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdio.h"

// prototype : 원형, 시제품 --> 어디서든 위치와 상관없이 함수 호출가능. 쓰여진 함수를 한눈에 파악 가능.

void walk(int);
void rotate(int);
void drawSquare();

int main()
{
	drawSquare();
}

// 걷기
void walk(int distance) {
	printf("%dcm를 걸었습니다.\n", distance);
}

// 돌기
void rotate(int angle) {
	printf("%d도 회전했습니다.\n", angle);
}

void drawSquare() {
	for (int i = 1; i <= 4; i++) {
		walk(10);
		rotate(90);
	}
}