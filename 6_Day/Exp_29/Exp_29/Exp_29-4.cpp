#include "stdafx.h"
#include "stdio.h"

/*

10*10 이하의 정수형 이차원 배열을 입력받아
그 배열의 각 행의 요소의 합을 출력하는 프로그램을 만들어보세요.

[입력 예]                     |       [출력 예]
3 4 (행과 열 개수)        |       15
4 2 6 3                       |       23
7 9 3 4                       |       9
5 1 2 1                       |  

*/

int main() {

	int n, k;
	int arr[10][10];

	printf("행과 열의 개수를 각 각 입력해주세요. \n");
	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 0; i < n; i++) {
		int sum = 0; // sum 변수를 생성할 것
		for (int j = 0; j < k; j++) {
			sum += arr[i][j];
		}
		printf("%d\n", sum); // 내부 루프를 마치고. 즉 한 행을 다 돌고, 다음 행으로 넘어가기 전 sum 출력.
	}
}