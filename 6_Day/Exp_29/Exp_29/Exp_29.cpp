// Exp_29.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

/*
1. 100개 이하의 정수를 입력받아
    첫 줄에 짝수 번째 숫자들을 순서대로 출력하고,
	다음 줄에 홀수 번째 숫자들을 순서대로 출력하는 프로그램을 만들어 보세요.
*/

#include "stdafx.h"
#include "stdio.h"

int main()
{
	int n;
	int arr[100];

	printf("100 이하의 정수를 입력하세요 : ");
	scanf("%d", &n);
	printf("%d의 개수만큼 배열의 원소를 입력하세요\n", n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);		 // arr[0], arr[1], arr[2], arr[3], arr[4]
	}

	printf("짝수 번째 숫자들 : ");

	for (int i = 1; i < n; i += 2) { // 1,3
		printf("%d ", arr[i]); // arr[1] , arr[3]
	}

	printf("\n홀수 번째 숫자들 : ");

	for (int i = 0; i < n; i += 2) { // 0,2,4
		printf("%d ", arr[i]); // arr[0], arr[2], arr[4] 
	}

	printf("\n");
}

