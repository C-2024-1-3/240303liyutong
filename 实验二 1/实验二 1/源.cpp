#include<iostream>
using namespace std;

int main() {

	char charInput;
	cout << "������һ���ַ���" << endl;
	cin >> charInput;
	int asciiValue = static_cast<int>(charInput);
	if (islower(charInput)) {
		cout << (char)toupper(charInput) << endl;
	}
	else {
		cout << (int)(charInput + 1) << endl;
	}


















	return 0;
}