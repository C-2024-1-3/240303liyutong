#include <iostream>
using namespace std;

int main() {
    // 首先创建一个包含 100 个元素且初始值都为 false（表示关闭）的布尔型数组，代表 100 个存物柜的状态
    bool lockers[100] = { false };

    // 然后遍历 100 个学生
    for (int student = 1; student <= 100; student++) {
        // 对于每个学生，从其对应的存物柜开始，每隔 student 个存物柜改变状态
        for (int locker = student - 1; locker < 100; locker += student) {
            // 改变存物柜的状态（开变为关，关变为开）
            lockers[locker] = !lockers[locker];
        }
    }

    // 最后找出状态为 true（开着）的存物柜，并打印其编号
    cout << "开着的存物柜编号为：";
    for (int i = 0; i < 100; i++) {
        if (lockers[i]) {
            cout << i + 1 << " ";
        }
    }
    cout << endl;

    return 0;
}