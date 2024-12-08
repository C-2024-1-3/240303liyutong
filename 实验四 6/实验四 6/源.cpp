#include <iostream>
#include <string>

int indexOf(const std::string s1, const std::string s2) {
    int len1 = s1.length();
    int len2 = s2.length();

    for (int i = 0; i <= len2 - len1; i++) {  // 从 s2 中可能开始匹配 s1 的位置开始遍历
        int j;
        for (j = 0; j < len1; j++) {  // 逐个字符比较 s1 和 s2 相应位置的字符
            if (s2[i + j] != s1[j]) {  // 只要有不匹配的就退出内层循环
                break;
            }
        }
        if (j == len1) {  // 如果内层循环完整走完，说明匹配成功
            return i;
        }
    }
    return -1;  // 遍历完都没找到匹配，返回 -1
}

int main() {
    std::string s1, s2;
    std::cout << "Enter the first string: ";
    std::cin >> s1;
    std::cout << "Enter the second string: ";
    std::cin >> s2;

    int result = indexOf(s1, s2);
    if (result != -1) {
        std::cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << result << std::endl;
    }
    else {
        std::cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is -1" << std::endl;
    }
    return 0;
}