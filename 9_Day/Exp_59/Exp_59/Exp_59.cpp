// Exp_59.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

// 0 ~ 1 float RGB

#include "stdafx.h"
#include "iostream"

using namespace std;

class Color {
public:
	Color() : r(0), g(0), b(0), id(idCounter++) { }
	Color(float r, float g, float b) : r(r), g(g), b(b), id(idCounter++) { }

	float GetR() { return r; }
	float GetG() { return g; }
	float GetB() { return b; }

	int GetId() { return id; }

	// 전역에서 쓰고 싶은 함수가 있을 경우, 그 함수가 어떤 클래스와 밀접하게 관련이 있고,
	// private 멤버 메소드나 변수에 바로 접근하고 싶을 때, 정적 메소드를 이용.

	// 정적함수
	static	Color MixColors(Color a, Color b) {
		return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
	}

	// 정적멤버
	static int idCounter;

	// 많은 수의 클래스가 존재하는 경우, 전역함수, 변수가 많아지고 프로그램이 복잡해진다.
	// 객체 지향 프로그래밍에서 전역함수, 변수는 지양하는 것이 좋다.
	// 최대한 클래스와 관련된 전역함수, 변수는 그 클래스 안으로 집어넣어야 한다.

private:
	float r;
	float g;
	float b;

	int id;
};

int Color::idCounter = 1; // 초기화는 클래스 밖에서 할 수 밖에 없음.

int main()
{
	Color red(1, 0, 0);
	Color blue(0, 0, 1);

	Color purple = Color::MixColors(red, blue);

	cout << "r= " << purple.GetR() << " g= " << purple.GetG() << " b= " << purple.GetB() << endl;

	cout << "red.GetId() = " << red.GetId() << endl;
	cout << "blue.GetId() = " << blue.GetId() << endl;
	cout << "purple.GetId() = " << purple.GetId() << endl;

}


