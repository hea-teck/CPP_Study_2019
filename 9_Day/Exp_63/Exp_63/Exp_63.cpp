// Exp_63.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

int n = 0;

namespace A {
	int n = 0;
	namespace B {
		void set() { n = 10; };
		int n = 0;
	}
}
namespace C {
	void set();
	int n = 0;
}

void C::set() { n = 20; } // 위 선언 + 정의 분리 한 것

int main()
{
	using namespace A::B;

	set();
	C::set();

	cout << ::n << endl;
	cout << A::n << endl;
	cout << A::B::n << endl;
	cout << C::n << endl;
}

