#include<iostream>
using namespace std;
void main()
{
    int i, j, * pi, * pj;
    pi = &i;  // ��ȷ�ؽ� i �ĵ�ַ����ָ�� pi
    pj = &j;  // ��ȷ�ؽ� j �ĵ�ַ����ָ�� pj
    i = 5;
    j = 7;
    cout << i << j << '|' << pj;
    cout << '|' << '|' << '|' << *pj;
}