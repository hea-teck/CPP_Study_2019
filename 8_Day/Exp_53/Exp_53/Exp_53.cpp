// Exp_53.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

int n;

void set();

namespace huitaek {
	int n;
	void set();
}
namespace google {
	int n;
	void set();
}

int main()
{
	::set();
	huitaek::set();
	google::set();

	cout << ::n << endl;
	cout << huitaek::n << endl;
	cout << google::n << endl;
}

void ::set() {
	n = 10;
}

void huitaek::set() {
	n = 20;
}

void google::set() {
	n = 30;
}
