#include<iostream>
using namespace std;


int main() {

	double side1 ;
	cout << "������������һ���ߣ�"  << endl;
	cin >> side1;
	double side2 ;
	cout << "������������һ���ߣ�"  << endl;
	cin >> side2;
	double side3 ;
	cout << "������������һ���ߣ�"  << endl;
	cin >> side3;

	if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2) {
		double perimeter = side1 + side2 + side3;
		cout << "�����ε��ܳ�Ϊ��" << perimeter;
		if (side1 == side2 && side2 == side3 && side1 == side3) {
			cout << "��������Ϊ����������" << endl;
		}
		else {
			cout << "�������β��ǵ���������" << endl;
		}
	}
	else {
		cout << "�������β�����" << endl;

	}













	return 0;
}