#include <iostream>
using namespace std;

int main() {
    // ���ȴ���һ������ 100 ��Ԫ���ҳ�ʼֵ��Ϊ false����ʾ�رգ��Ĳ��������飬���� 100 ��������״̬
    bool lockers[100] = { false };

    // Ȼ����� 100 ��ѧ��
    for (int student = 1; student <= 100; student++) {
        // ����ÿ��ѧ���������Ӧ�Ĵ����ʼ��ÿ�� student �������ı�״̬
        for (int locker = student - 1; locker < 100; locker += student) {
            // �ı������״̬������Ϊ�أ��ر�Ϊ����
            lockers[locker] = !lockers[locker];
        }
    }

    // ����ҳ�״̬Ϊ true�����ţ��Ĵ���񣬲���ӡ����
    cout << "���ŵĴ������Ϊ��";
    for (int i = 0; i < 100; i++) {
        if (lockers[i]) {
            cout << i + 1 << " ";
        }
    }
    cout << endl;

    return 0;
}