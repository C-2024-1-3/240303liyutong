#include <iostream>
using namespace std;

int main() {
    int distinctNumbers[10];  // 创建一个能存储 10 个数的数组
    int count = 0;  // 用于记录不同数的个数

    cout << "Enter ten numbers:" << endl;
    for (int i = 0; i < 10; i++) {  // 循环读入 10 个数
        int number;
        cin >> number;
        bool isDistinct = true;  // 先假设读入的数是不同的

        for (int j = 0; j < count; j++) {  // 遍历已存储的数
            if (distinctNumbers[j] == number) {  // 如果已存在相同的数
                isDistinct = false;  // 则标记为不是不同的数
                break;  // 结束内层循环
            }
        }

        if (isDistinct) {  // 如果是不同的数
            distinctNumbers[count++] = number;  // 存入数组，并增加不同数的个数
        }
    }

    cout << "The distinct numbers are:" << endl;
    for (int i = 0; i < count; i++) {  // 输出不同的数
        cout << distinctNumbers[i] << " ";
    }

    return 0;
}