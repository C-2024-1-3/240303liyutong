#include<iostream>
using namespace std;


int main() {

	double side1 ;
	cout << "请输入三角形一条边："  << endl;
	cin >> side1;
	double side2 ;
	cout << "请输入三角形一条边："  << endl;
	cin >> side2;
	double side3 ;
	cout << "请输入三角形一条边："  << endl;
	cin >> side3;

	if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2) {
		double perimeter = side1 + side2 + side3;
		cout << "三角形的周长为：" << perimeter;
		if (side1 == side2 && side2 == side3 && side1 == side3) {
			cout << "该三角形为等腰三角形" << endl;
		}
		else {
			cout << "该三角形不是等腰三角形" << endl;
		}
	}
	else {
		cout << "该三角形不存在" << endl;

	}













	return 0;
}