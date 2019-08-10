#include "stdafx.h"
#include "iostream"

using namespace std;

int inventory[64] = { 0 };
int score = 0;

void getItem(int itemId, int cnt = 1, int sc = 0) { // default값은 오른쪽부터 지정해야한다.
	inventory[itemId] += cnt;
	score += sc;
}

int main() {
	getItem(6, 5);
	getItem(3, 2);
	getItem(3);
	getItem(11, 34, 7000);

	for (int i = 0; i < 16; i++) {
		cout << inventory[i] << ' ';
	}
	cout << endl;
	cout << score << endl;
}