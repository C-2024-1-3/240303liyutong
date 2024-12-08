#include <iostream>
#include <string>

// 函数用于检查 s1 是否为 s2 的子串，返回首次匹配的下标，否则返回 -1
int indexof(const std::string& s1, const std::string& s2) {
    int len1 = s1.length();
    int len2 = s2.length();

    // 遍历 s2 字符串
    for (int i = 0; i <= len2 - len1; i++) {
        int j;
        // 逐个比较 s1 和 s2 中对应位置的字符
        for (j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {
                break;
            }
        }
        // 如果完整比较完 s1 都相等，说明找到匹配，返回下标
        if (j == len1) {
            return i;
        }
    }
    // 未找到匹配，返回 -1
    return -1;
}

int main() {
    std::string s1, s2;

    std::cout << "请输入字符串 s1：";
    std::cin >> s1;

    std::cout << "请输入字符串 s2：";
    std::cin >> s2;

    int result = indexof(s1, s2);
    if (result != -1) {
        std::cout << "字符串 s1 是字符串 s2 的子串，首次匹配下标为：" << result << std::endl;
    }
    else {
        std::cout << "字符串 s1 不是字符串 s2 的子串" << std::endl;
    }

    return 0;
}