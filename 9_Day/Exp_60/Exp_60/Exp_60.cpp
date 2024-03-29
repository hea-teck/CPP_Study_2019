// Exp_60.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

// 1. 매개변수의 상수화 (모든 함수)
// 2. 매서드의 상수화 (멤버 메서드)

#include "stdafx.h"
#include "iostream"

using namespace std;

class Account {
public:
	Account() : money(0){ }
	Account(int money) : money(money){ }

	void Deposit(const int d) {
		money += d;
		cout << d << "원을 예금했다!!" << endl;
	}
	void Draw(const int d) {
		if (money >= d) {
			money -= d;
			cout << d << "원을 인출했다!!" << endl;
		}
	}

	int ViewMoney() const {
		return money;
	}

private:
	int money;
};

int main()
{
	Account huitaek(100);

	huitaek.Deposit(100);
	huitaek.Draw(20);

	cout << huitaek.ViewMoney() << endl;
}

