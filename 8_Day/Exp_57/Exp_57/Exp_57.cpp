// Exp_57.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

// 생성자 : 멤버 변수 초기화
// 복소수(real : 실수부, imag : 허수부)

class Complex {
public:
	Complex() : real(0), imag(0) { }
	Complex(double real, double imag) : real(real), imag(imag){ }

	double GetReal() {
		return real;
	}
	void SetReal(double real_) {
		real = real_;
	}
	double GetImag() {
		return imag;
	}
	void SetImag(double imag_) {
		imag = imag_;
	}

private:
	double real;
	double imag;
};

int main() {
	int a(5);

	Complex c1;
	Complex c2 = Complex(2, 3);
	Complex c3(2, 3);

	Complex c4 = { 2,3 };
	Complex c5 = Complex{ 2,3 };
	Complex c6{ 2,3 };

	cout << "C1= " << c1.GetReal() << ", " << c1.GetImag() << endl;
	cout << "C2= " << c2.GetReal() << ", " << c2.GetImag() << endl;
	cout << "C3= " << c3.GetReal() << ", " << c3.GetImag() << endl;
}
