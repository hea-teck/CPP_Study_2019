#include "stdafx.h"
#include "iostream"

using namespace std;

int main() {
	int a(5);
	
	int &r1 = a; // l-value : 수정할 수 있는

	// int &r2 = 3; // 3은 메모리에 저장되어 있는 값이 아니므로 레퍼런스 변수에 대입 못함
	int &&r2 = 3; // r-value : 수정할 수 없는

	// int &r3 = a * a // a * a 는 식이다...
	int &&r3 = a * a; // r-value : 수정할 수 없는
}