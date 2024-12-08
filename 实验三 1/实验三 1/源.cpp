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
	
	cout << "请输入第一个数：" << endl;
	cin >> m;
	cout << "请输入第二个数：" << endl;
	cin >> n;
	gcdValue = gcd(m,n);
	lcmValue = lcm(m,n);
	cout << "m和n的最大公约数为：" << gcdValue<<endl;
	cout << "m和n的最小公倍数为：" << lcmValue<<endl;
	return 0;

}