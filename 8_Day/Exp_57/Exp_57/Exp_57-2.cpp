#include "stdafx.h"
#include "iostream"

using namespace std;

// Time(5);
// Time(5, 0);
// Time(2, 37, 54);

class Time {

public:	
	Time() : h(0), m(0), s(0) { }
	Time(int s_) : Time() {
		s = s_;
	}
	Time(int m_, int s_) : Time(s_) {
		m = m_;
	}
	Time(int h_, int m_, int s_) : Time(m_, s_) {
		h = h_;
	}	
	int GetH() {
		return h;
	}
	void SetH(int h_) {
		h = h_;
	}
	int GetM() {
		return m;
	}
	void SetM(int m_) {
		m = m_;
	}
	int GetS() {
		return s;
	}
	void SetS(int s_) {
		s = s_;
	}

private:
	int h;
	int m;
	int s;
};

int main() {
	Time t1;
	Time t2(5);
	Time t3(3, 16);
	Time t4(2, 42, 15);

	cout << "t1 : " << t1.GetH() << ":" << t1.GetM() << ":" << t1.GetS() << endl;
	cout << "t2 : " << t2.GetH() << ":" << t2.GetM() << ":" << t2.GetS() << endl;
	cout << "t3 : " << t3.GetH() << ":" << t3.GetM() << ":" << t3.GetS() << endl;
	cout << "t4 : " << t4.GetH() << ":" << t4.GetM() << ":" << t4.GetS() << endl;
}