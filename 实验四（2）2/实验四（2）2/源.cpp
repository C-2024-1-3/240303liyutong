#include<iostream>
using namespace std;
int main()
{
    int a[] = { 1, 2, 3 };
    int* p, i;
    p = a;

    for (i = 0; i < 3; i++)
    {
        print f("%d,%d,%d\n", a[i], *(p + i), *(a + i));
    }
}