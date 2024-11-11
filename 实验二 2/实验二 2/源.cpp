#include<iostream>
using namespace std;

int main() {
	int x = 0;
	cout << "ÇëÊäÈëx:" << endl;
	cin >> x;
	if (0 < x < 1) {
		cout << 3 - 2*x << endl;
	}
	else if (1 <= x < 5) {
		cout << 1 / x * 1 / 2 + 1 << endl;
	}
	else if (5 <= x < 10) {
		cout << x * x << endl;
	}













	return 0;
}