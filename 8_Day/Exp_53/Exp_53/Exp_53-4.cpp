#include "stdafx.h"
#include "iostream"

int n;
void set() {
	n = 10;
}

namespace huitaek {
	int n;
	void set() {
		n = 20;
	}

	namespace google {
		int n;
		void set() {
			n = 30;
		}
	}
}

int main() {
	using namespace std;
	using namespace huitaek;

	::set(); // :: 생략 불가
	huitaek::set(); // huitaek:: 생략 불가
	huitaek::google::set(); // huitaek:: 생략 가능

	cout << ::n << endl;
	cout << huitaek::n << endl;
	cout << huitaek::google::n << endl;
}