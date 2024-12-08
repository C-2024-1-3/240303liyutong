#include <iostream>
using namespace std;

// 冒泡排序函数，用于对数组进行排序
void bubbleSort(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;  // 用于存储用户输入的数组元素个数

    cout << "请输入数组元素的个数: ";
    cin >> n;  // 从键盘获取数组元素个数

    int* arr = new int[n];  // 使用 new 动态分配内存创建数组

    cout << "请输入 " << n << " 个整数: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // 从键盘输入数组元素
    }

    // 调用排序函数对数组进行排序
    bubbleSort(arr, n);

    cout << "排序后的数组元素为: ";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";  // 用指针方式输出数组元素
    }
    cout << endl;

    delete[] arr;  // 释放动态分配的内存

    return 0;
}