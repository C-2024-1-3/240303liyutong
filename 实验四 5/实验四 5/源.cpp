#include <iostream>

// 合并两个已排序数组的函数
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int i = 0, j = 0, k = 0;

    // 当两个数组都还有元素时
    while (i < size1 && j < size2) {
        // 如果第一个数组的当前元素小于第二个数组的当前元素
        if (list1[i] < list2[j]) {
            list3[k++] = list1[i++];  // 将第一个数组的当前元素放入合并后的数组，并移动指针
        }
        else {
            list3[k++] = list2[j++];  // 否则将第二个数组的当前元素放入合并后的数组，并移动指针
        }
    }

    // 如果第一个数组还有剩余元素，将其全部放入合并后的数组
    while (i < size1) {
        list3[k++] = list1[i++];
    }

    // 如果第二个数组还有剩余元素，将其全部放入合并后的数组
    while (j < size2) {
        list3[k++] = list2[j++];
    }
}

int main() {
    int list1[80], list2[80], list3[160];
    int size1, size2;

    std::cout << "Enter list1: ";
    std::cin >> size1;
    for (int i = 0; i < size1; i++) {
        std::cin >> list1[i];
    }

    std::cout << "Enter list2: ";
    std::cin >> size2;
    for (int i = 0; i < size2; i++) {
        std::cin >> list2[i];
    }

    merge(list1, size1, list2, size2, list3);

    std::cout << "The merged list is ";
    for (int i = 0; i < size1 + size2; i++) {
        std::cout << list3[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}