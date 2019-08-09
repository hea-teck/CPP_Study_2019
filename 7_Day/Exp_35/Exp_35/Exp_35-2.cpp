#include "stdafx.h"
#include "stdio.h"

// 팩토리얼
// n! = n * (n-1)!

// n을 매개변수 -> n!을 return
int factorial(int n) {
	if (n == 1) return 1;
	return n * factorial(n - 1);
}

int main() {
	printf("%d\n", factorial(3));
}


/*
int n;
scanf("%d", &n);
int factorial = 1;
for (int i = 1; i <= n; i++) {
factorial *= i;
}
printf("%d\n", factorial);
*/