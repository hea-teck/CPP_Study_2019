#include "stdafx.h"
#include "iostream"

using namespace std;

int n;
void set() {
	n = 10;
}

namespace huitaek {
	void set();

	namespace google {
		void set();
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

void huitaek::set() {
	n = 20;
}

void huitaek::google::set() {
	n = 30;
}