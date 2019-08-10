#include "stdafx.h"
#include "iostream"

using namespace std;

int n;
void set() {
	n = 10;
}

namespace huitaek {
	void set() {
		n = 20;
	}
	namespace google {
		void set() {
			n = 30;
		}
		int n;
	}
	int n;
}

int main() {
	::set();
	huitaek::set();
	huitaek::google::set();

	cout << ::n << endl;
	cout << huitaek::n << endl;
	cout << huitaek::google::n << endl;
}