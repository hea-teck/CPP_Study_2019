#include "stdafx.h"

#include <stdio.h>

// do-while

int main() {

	int i = 11;

	do { //무조건 한번은 실행
		printf("%d\n", i);
		i++;
	} while (i <= 10);

}