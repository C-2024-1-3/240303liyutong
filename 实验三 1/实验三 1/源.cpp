#include<iostream>
using namespace std;

int gcd(int m, int n) {
	int temp;
	while (n != 0) {
		temp = n;
		n = m % n;
		m = temp;
	}
	
	return m;
}
int lcm(int m,int n) {
	
	int max=(m>n?m:n);
	while (true) {
		if (max % m == 0 && max % n == 0) {
			return max;
		}
	}
	max++;

}
int main(){
	int m, n,gcdValue, lcmValue;
	
	cout << "�������һ������" << endl;
	cin >> m;
	cout << "������ڶ�������" << endl;
	cin >> n;
	gcdValue = gcd(m,n);
	lcmValue = lcm(m,n);
	cout << "m��n�����Լ��Ϊ��" << gcdValue<<endl;
	cout << "m��n����С������Ϊ��" << lcmValue<<endl;
	return 0;

}