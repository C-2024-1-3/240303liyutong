#include<iostream>
using namespace std;

int gcd(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int lcm(int a, int b) {
	return a * b / gcd(a, b);
}
int main() {
	int a, b;
	cout << "������������������" << endl;
	cin >> a >> b;
	int gcdValue = gcd(a, b);
	int lcmValue = lcm(a, b);
	cout << "���Լ���ǣ�" << gcdValue << endl;
	cout << "��С��Լ���ǣ�" << lcmValue << endl;
	return 0;
}