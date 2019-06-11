#include "stdafx.h"

#include <stdio.h>

int main() {
	int a = 10;

	int *ptr;
	ptr = &a;

	int **ptr_ptr;
	ptr_ptr = &ptr;

	printf("a = %d\n", a);     // 10
	printf("&a = %d\n", &a); // 123456

	printf("ptr = %d\n", ptr); // 123456
	printf("&ptr = %d\n", &ptr); //898989

	printf("ptr_ptr = %d\n", ptr_ptr); //898989
	printf("*ptr_ptr = %d\n", *ptr_ptr); //123456
	printf("**ptr_ptr = %d\n", **ptr_ptr); // 10 [*ptr_ptr = ptr => *ptr = a] 

}