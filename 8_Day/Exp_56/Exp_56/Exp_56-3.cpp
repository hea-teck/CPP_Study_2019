#include "stdafx.h"
#include "iostream"

using namespace std;

// 생성자 : 멤버 변수 초기화
// 복소수(real : 실수부, imag : 허수부)

class Complex {
public:
	Complex() {
		real = 0;
		imag = 0;
	}
	Complex(double real_, double imag_) { // 오버로드
		real = real_;
		imag = imag_;
	}
	double GetReal() { // get함수
		return real;
	}
	void SetReal(double real_) { // set함수
		real = real_;
	}
	double GetImag() { // get함수
		return imag;
	}
	void SetImag(double imag_) { // set함수
		imag = imag_;
	}

private:
	double real;
	double imag;
};

int main() {
	Complex c1; // 매개변수가 없음
	Complex c2 = Complex(2, 3);
	Complex c3(2, 3);

	Complex c4 = { 2,3 };
	Complex c5 = Complex{ 2,3 };
	Complex c6{ 2,3 };

	cout << "C1= " << c1.GetReal() << ", " << c1.GetImag() << endl;
	cout << "C2= " << c2.GetReal() << ", " << c2.GetImag() << endl;
	cout << "C3= " << c3.GetReal() << ", " << c3.GetImag() << endl;
}