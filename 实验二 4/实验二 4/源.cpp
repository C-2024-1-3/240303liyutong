#include<iostream>
using namespace std;

int main() {

	double number1;
	cout << "�������һ������" << endl;
	cin >> number1;
	char op;

	cout << "�������������" << endl;
	cin >> op;

	double number2;
	cout << "������ڶ�������" << endl;
	cin >> number2;
	double result;
	switch (op) {
	case '+' :
		cout<<"result="<<number1 + number2<<endl;
		break;
	case'-':
		cout << "result=" << number1 - number2 << endl;
		break;
	case'*':
		cout << "result=" << number1 *number2 << endl;
		break;
	case'/':
		cout << "result=" << number1 /number2 << endl;

		return 0;
	}
	











	return 0;
}