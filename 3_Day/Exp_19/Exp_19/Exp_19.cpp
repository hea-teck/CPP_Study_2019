#include "stdafx.h"

#include <stdio.h>

int main() {

	int score;
	scanf("%d", &score);

	if (score < 0 || score>100) {
		printf("잘못입력하셨습니다.\n");
	}
	else if (score >= 90) {
		printf("A등급입니다.\n");
	}
	else if (score >= 80) {
		printf("B등급입니다.\n");
	}
	else if (score >= 70) {
		printf("C등급입니다.\n");
	}
	else if (score >= 60) {
		printf("D등급입니다.\n");
	}
	else {
		printf("E등급입니다.\n");
	}


}