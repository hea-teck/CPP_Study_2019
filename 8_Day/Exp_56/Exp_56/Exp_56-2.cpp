// Exp_56.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

// 생성자 : 객체가 생성될 때 자동으로 호출되는 함수
// 소멸자 : 객체가 소멸될 때 자동으로 호출되는 함수

#include "stdafx.h"
#include "iostream"

using namespace std;

class MyClass {
public:
	MyClass() { // 생성자
		cout << "생성자가 호출되었다!!" << endl;
	}

	~MyClass() // 소멸자
	{
		cout << "소멸자가 호출되었다!!" << endl;
	}
};

//MyClass globalObj; // 전역 객체

void testLocalObj() {
	cout << "testLocalObj함수 시작!!" << endl;
	MyClass localObj;
	cout << "testLocalObj함수 끝!!" << endl;
}

int main()
{
	cout << "main함수 시작!!" << endl;
	testLocalObj();
	cout << "main함수 끝!!" << endl;
}

