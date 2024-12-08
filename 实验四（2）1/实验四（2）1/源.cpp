#include<iostream>
using namespace std;
void main()
{
    int i, j, * pi, * pj;
    pi = &i;  // 正确地将 i 的地址赋给指针 pi
    pj = &j;  // 正确地将 j 的地址赋给指针 pj
    i = 5;
    j = 7;
    cout << i << j << '|' << pj;
    cout << '|' << '|' << '|' << *pj;
}