#include <iostream>
void f(char* st, int i) {
    st[i - 1] = '\0';//注意数组下标从0开始，第4个字符的下标是3
    std::cout << st << std::endl;
    if (i > 1) f(st, i - 1);
}

int main() {
    char st[] = "abcd";
    f(st, 4);
    return 0;
}