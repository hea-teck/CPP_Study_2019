#include "stdafx.h"
#include "stdio.h"

#define MAX(A,B) ((A) > (B)) ? (A) : (B)

//»ïÇ× ¿¬»êÀÚ

//int max(int a, int b) {
//	
//	/*if (a > b) return a;
//	else return b;*/
//	
//	return (a > b) ? a : b;
//}

int main() {
	int a = 5, b = 10;

	printf("%d\n", MAX(a, b));
}
