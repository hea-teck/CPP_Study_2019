// Exp_47.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdio.h"

// 파일 입출력

int main()
{
	FILE *in, *out; // 스트림
	int n;

	in = fopen("input.txt", "r");
	out = fopen("output.txt", "a");

	fscanf(in, "%d", &n);
	fprintf(out, "%d\n", n); // 콘솔에 출력이 아닌 output.txt에 출력. 그래서 fprintf를 쓰는 것임.

	fclose(in);
	fclose(out);
}

