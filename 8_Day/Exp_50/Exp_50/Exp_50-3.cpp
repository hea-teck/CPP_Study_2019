#include "stdafx.h"
#include "iostream"

using namespace std;

void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int a(5), b(7);
	swap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}