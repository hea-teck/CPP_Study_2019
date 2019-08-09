#include "stdafx.h"
#include "stdio.h"

// sscanf / sprintf : 문자열로부터 입력과 출력을 받는다.

int main() {
	/*char str[] = "450"; // 문자열로 된 450을 정의한 상태
	int n;

	sscanf(str, "%d", &n); // 450 문자열로부터 입력을 받아서 그 값을 n에 저장한다.
	printf("n의 값 : %d\n", n);*/ // 위에서 n에 450이 들어가있으므로, 출력하면 450이 출력된다.

	int n = 450;
	char str[100]; // str에 출력을 하기 위해서. 100으로 크기 설정.

	sprintf(str, "%d", n); // 450이 %d 형식으로 str에 저장된다.
	printf("%s\n", str);

}