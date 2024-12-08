#include <iostream>
#include <string>

// �������ڼ�� s1 �Ƿ�Ϊ s2 ���Ӵ��������״�ƥ����±꣬���򷵻� -1
int indexof(const std::string& s1, const std::string& s2) {
    int len1 = s1.length();
    int len2 = s2.length();

    // ���� s2 �ַ���
    for (int i = 0; i <= len2 - len1; i++) {
        int j;
        // ����Ƚ� s1 �� s2 �ж�Ӧλ�õ��ַ�
        for (j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {
                break;
            }
        }
        // ��������Ƚ��� s1 ����ȣ�˵���ҵ�ƥ�䣬�����±�
        if (j == len1) {
            return i;
        }
    }
    // δ�ҵ�ƥ�䣬���� -1
    return -1;
}

int main() {
    std::string s1, s2;

    std::cout << "�������ַ��� s1��";
    std::cin >> s1;

    std::cout << "�������ַ��� s2��";
    std::cin >> s2;

    int result = indexof(s1, s2);
    if (result != -1) {
        std::cout << "�ַ��� s1 ���ַ��� s2 ���Ӵ����״�ƥ���±�Ϊ��" << result << std::endl;
    }
    else {
        std::cout << "�ַ��� s1 �����ַ��� s2 ���Ӵ�" << std::endl;
    }

    return 0;
}