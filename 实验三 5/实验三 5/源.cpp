#include<iostream>
using namespace std;

int peach(int day) {
	if (day == 10) {
		return 1;
	}
	else {
		return((peach(day + 1) + 1) * 2);
	}
}
int main() {
	cout << "���ӵ�һ��ժ����������Ϊ" << peach(1)<< endl;
	return 0;
}