#include<iostream>
using namespace std;

int main() {

	double number1;
	cout << "请输入第一个数：" << endl;
	cin >> number1;
	char op;

	cout << "请输入运算符：" << endl;
	cin >> op;

	double number2;
	cout << "请输入第二个数：" << endl;
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