#include <iostream>
using namespace std;

int main() {
    int distinctNumbers[10];  // ����һ���ܴ洢 10 ����������
    int count = 0;  // ���ڼ�¼��ͬ���ĸ���

    cout << "Enter ten numbers:" << endl;
    for (int i = 0; i < 10; i++) {  // ѭ������ 10 ����
        int number;
        cin >> number;
        bool isDistinct = true;  // �ȼ����������ǲ�ͬ��

        for (int j = 0; j < count; j++) {  // �����Ѵ洢����
            if (distinctNumbers[j] == number) {  // ����Ѵ�����ͬ����
                isDistinct = false;  // ����Ϊ���ǲ�ͬ����
                break;  // �����ڲ�ѭ��
            }
        }

        if (isDistinct) {  // ����ǲ�ͬ����
            distinctNumbers[count++] = number;  // �������飬�����Ӳ�ͬ���ĸ���
        }
    }

    cout << "The distinct numbers are:" << endl;
    for (int i = 0; i < count; i++) {  // �����ͬ����
        cout << distinctNumbers[i] << " ";
    }

    return 0;
}