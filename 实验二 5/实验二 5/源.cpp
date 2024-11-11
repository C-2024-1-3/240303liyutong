#include <iostream>
using namespace std;

int main() {
    char c;  // 定义一个字符变量来存储输入的字符
    int letterCount = 0;  // 用于统计字母的个数
    int spaceCount = 0;  // 用于统计空格的个数
    int digitCount = 0;  // 用于统计数字的个数
    int otherCount = 0;  // 用于统计其他字符的个数

    cout << "请输入一行字符：" << endl;

    while ((c = getchar()) != '\n') {  // 不断读取字符，直到遇到换行符
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {  // 如果是字母
            letterCount++;
        }
        else if (c == ' ') {  // 如果是空格
            spaceCount++;
        }
        else if (c >= '0' && c <= '9') {  // 如果是数字
            digitCount++;
        }
        else {  // 其他情况
            otherCount++;
        }
    }

    cout << "字母的个数：" << letterCount << endl;
    cout << "空格的个数：" << spaceCount << endl;
    cout << "数字的个数：" << digitCount << endl;
    cout << "其他字符的个数：" << otherCount << endl;

    return 0;
}











	