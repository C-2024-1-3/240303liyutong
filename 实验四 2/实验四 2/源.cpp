#include <iostream>
using namespace std;

// ð��������
void bubbleSort(double list[], int listSize) {
    bool changed = true;
    do {
        changed = false;
        for (int j = 0; j < listSize - 1; j++) {
            if (list[j] > list[j + 1]) {
                double temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
                changed = true;
            }
        }
    } while (changed);
}

// ���Գ���
int main() {
    double arr[10];
    cout << "������ 10 ��˫�������֣�" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr, 10);

    cout << "���������飺" << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}