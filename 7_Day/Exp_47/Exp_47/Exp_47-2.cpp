#include "stdafx.h"
#include "stdio.h"

int main() {
	FILE *in; // 스트림
	int n;

	in = fopen("intput.txt", "r"); // intput.txt는 없는 파일

	if (in != nullptr){
		fscanf(in, "%d", &n);
		printf("%d\n", n);
		fclose(in);
	}
}