#include "stdafx.h"

#include <stdio.h>

// 배열 값 입력 후, 최소 최대값 출력

int main() {
	int n;
	int arr[100];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int max = arr[0];
	for (int i = 1; i < n; i++) {
		if (max < arr[i])
			max = arr[i];
	}

	int min = arr[0];
	for (int i = 1; i < n; i++) {
		if (min > arr[i])
			min = arr[i];
	}

	printf("%d", max);

	printf("%d", min);

}