#include<iostream>
#include<iomanip>
using namespace std;

int main() {

	double fahrenheit ;
	cout << "请输入华氏温度：" << endl;
	cin >> fahrenheit;
	double celcius = (fahrenheit - 32) * 5.0 / 9.0;
	cout <<fixed<<setprecision(2)<< "摄氏温度为：" << celcius << endl;














	return 0;
}