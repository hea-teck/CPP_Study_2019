// Exp_64.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

class MyClass {
public:
	MyClass() : num(cnt++), ch('\0'){} // 객체가 생성될 때마다 num이 1씩 증가한다.
	
	void Check(MyClass *ptr) { // ptr == &obj[0] == obj
		// 즉, 항상 성립되는 조건문
		// ptr + num = &ptr[num] = &obj[num]
		// this ==> 자기가 속해있는 객체를 가리키는 포인터
		if (ptr + num == this) {  
			cout << num << endl; 
		}
	}
	static int cnt;

private:
	int num;
	char ch;
};

int MyClass::cnt = 0;

int main()
{
	MyClass obj[5]; // obj배열이 선언이 되면서, MyClass라는 객체가 5개가 생성이된다.

	cout << "Test #1 : " << endl;

	for (int i = 0; i < 5; i++) {
		obj[i].Check(obj);
	}

	cout << "Test #2 : " << endl;
	
	for (MyClass &i : obj) {
		i.Check(obj);
	}

	cout << "cnt = " << MyClass::cnt << endl;
}

