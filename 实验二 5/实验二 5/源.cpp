#include <iostream>
using namespace std;

int main() {
    char c;  // ����һ���ַ��������洢������ַ�
    int letterCount = 0;  // ����ͳ����ĸ�ĸ���
    int spaceCount = 0;  // ����ͳ�ƿո�ĸ���
    int digitCount = 0;  // ����ͳ�����ֵĸ���
    int otherCount = 0;  // ����ͳ�������ַ��ĸ���

    cout << "������һ���ַ���" << endl;

    while ((c = getchar()) != '\n') {  // ���϶�ȡ�ַ���ֱ���������з�
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {  // �������ĸ
            letterCount++;
        }
        else if (c == ' ') {  // ����ǿո�
            spaceCount++;
        }
        else if (c >= '0' && c <= '9') {  // ���������
            digitCount++;
        }
        else {  // �������
            otherCount++;
        }
    }

    cout << "��ĸ�ĸ�����" << letterCount << endl;
    cout << "�ո�ĸ�����" << spaceCount << endl;
    cout << "���ֵĸ�����" << digitCount << endl;
    cout << "�����ַ��ĸ�����" << otherCount << endl;

    return 0;
}











	