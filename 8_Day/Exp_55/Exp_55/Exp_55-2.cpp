// Exp_55.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

// this : 자기 객체 자신을 가리키는 포인터

#include "stdafx.h"
#include "iostream"

using namespace std;

class Myclass {
public:
	void PrintThis(Myclass *ptr) {
		cout << "나의 주소는 " << ptr << endl;
	}
};


int main()
{
	Myclass a, b; // 객체 a,b 설정

	cout << "a의 주소는 " << &a << endl;
	cout << "b의 주소는 " << &b << endl;

	a.PrintThis(&a);
	b.PrintThis(&b);
}

