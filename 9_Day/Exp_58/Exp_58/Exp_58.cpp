// Exp_58.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

// static : 정적 <-> 동적

#include "stdafx.h"
#include "iostream"

using namespace std;

// 0 ~ 1 float RGB

class Color {
public:
	Color() : r(0), g(0), b(0) { }
	Color(float r, float g, float b) : r(r), g(g), b(b) { }

	float GetR() { return r; }
	float GetG() { return g; }
	float GetB() { return b; }
	
	// 전역에서 쓰고 싶은 함수가 있을 경우, 
	// 그 함수가 어떤 클래스와 밀접하게 관련이 있고,
	// private 멤버 메소드나 변수에 바로 접근하고 싶을 때,
	// 정적 메소드를 이용하는 것.

	static Color MixColors(Color a, Color b) {
		return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
	}

private:
	float r;
	float g;
	float b;
};



int main()
{
	Color blue(0, 0, 1);
	Color red(1, 0, 0);

	Color purple = Color::MixColors(blue, red);

	cout << "r= " << purple.GetR() << " g= " << purple.GetG() << " b= " << purple.GetB() << endl;
}

