// Exp_51.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "iostream"

// overload : 다중 정의

void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void swap(double &da, double &db) {
	double tmp = da;
	da = db;
	db = tmp;
}

void swap(int* (&pa), int* (&pb)) {
	int *tmp = pa;
	pa = pb;
	pb = tmp;
}

int main()
{
	int a = 20, b = 30;
	double da = 2.222, db = 3.333;
	int *pa = &a, *pb = &b;

	swap(a, b);
	swap(da, db);
	swap(pa, pb);

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	
	std::cout << "da : " << da << std::endl;
	std::cout << "db : " << db << std::endl;

	std::cout << "*pa : " << *pa << std::endl;
	std::cout << "*pb : " << *pb << std::endl;
}

