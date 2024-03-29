// Exp_62.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

class Vector2 {
public:
	Vector2();
	Vector2(float x, float y);

	float GetX() const;
	float GetY() const;
	
	// 자기 자신에다가 우변의 값에 따라 연산을 진행
	Vector2 operator+(const Vector2 rhs) const;
	Vector2 operator-(const Vector2 rhs) const;
	Vector2 operator*(const float rhs) const; // 상수를 곱하고.
	Vector2 operator/(const float rhs) const; // 상수를 나누고.
	float operator*(const Vector2 rhs) const; // 벡터 내적


private:
	float x;
	float y;
};

// 자기 자신이라는 개념이 없음. 좌변과 우변을 동시에 매개변수로 받아서 연산을 진행
Vector2 operator*(const float a, const Vector2 b) { // 상수를 곱하고.
	return Vector2(a*b.GetX(), a*b.GetY());
}

int main()
{
	Vector2 a(2, 3);
	Vector2 b(-1, 4);
	Vector2 c1 = a - b;
	Vector2 c2 = a * 1.6;
	// Vector2 c2 = (1.6).operator*(a); // 기본자료형은 연산자 오버로딩이 불가능. 즉 1.6은 객체가 아니다.
	Vector2 c3 = 1.6 * a;
	float c4 = a * b;

	cout << a.GetX() << ", " << a.GetY() << endl;
	cout << b.GetX() << ", " << b.GetY() << endl;
	cout << c1.GetX() << ", " << c1.GetY() << endl;
	cout << c2.GetX() << ", " << c2.GetY() << endl;
	cout << c3.GetX() << ", " << c3.GetY() << endl;
	cout << c4 << endl;

}

Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(float x, float y) : x(x), y(y) {}

float Vector2::GetX() const { return x; }
float Vector2::GetY() const { return y; }

Vector2 Vector2::operator+(const Vector2 rhs) const {
	return Vector2(x + rhs.x, y + rhs.y);	
}
Vector2 Vector2::operator-(const Vector2 rhs) const {
	return Vector2(x - rhs.x, y - rhs.y);
}
Vector2 Vector2::operator*(const float rhs) const {
	return Vector2(x * rhs, y * rhs);
}
Vector2 Vector2::operator/(const float rhs) const {
	return Vector2(x / rhs, y / rhs);
}
float Vector2::operator*(const Vector2 rhs) const {
	return x * rhs.x + y * rhs.y;
}