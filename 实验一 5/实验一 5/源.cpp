#include<iostream>
#include<iomanip>
using namespace std;

int main() {

	double fahrenheit ;
	cout << "�����뻪���¶ȣ�" << endl;
	cin >> fahrenheit;
	double celcius = (fahrenheit - 32) * 5.0 / 9.0;
	cout <<fixed<<setprecision(2)<< "�����¶�Ϊ��" << celcius << endl;














	return 0;
}