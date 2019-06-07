// 체중(kg, 실수)과 키(m, 실수)를 입력받아서 체질량 지수를 구하는 프로그램을 만들어 보세요.

#include "stdafx.h"

#include <stdio.h>

int main() {

	float w, t;

	printf("체중(kg)과 키(m)를 입력하세요.\n");
	scanf("%f%f", &w, &t);

	float bmi = w / (t * t);

	printf("체질량 지수는 %f입니다.\n", bmi);

}