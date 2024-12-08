#include <iostream>
using namespace std;

int* f()
{
    int* list = new int[4] {1, 2, 3, 4};  // 使用 new 动态分配内存
    return list;
}

void main()
{
    int* p = f();
    cout << p[0] << endl;
    cout << p[1] << endl;
    delete[] p;  // 使用 delete 释放动态分配的内存
}