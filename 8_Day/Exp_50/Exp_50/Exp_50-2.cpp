#include "stdafx.h"
#include "iostream"

using namespace std;

int main() {
	int arr[10] = { 3,1,4,1,5,9,2,6,5,3 };

	for (int &n : arr) {
		// ex) int n = arr[6] 일때, n++을 할지라도 ... n이 바뀐다고 arr[6]이 바뀌는 것이 아니다.
		// 레퍼런스 변수 &n을 이용하게되면 int &n = arr[6] ...
		// 근데... 왜 배열 값이 1씩 증가할까..... 계속 연구해보자!
		cout << n << ' ';
		n++;
	}
	cout << endl;

	for (int n : arr) {
		cout << n << ' ';
	}
	cout << endl;
}