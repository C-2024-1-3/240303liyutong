#include <iostream>
void f(char* st, int i) {
    st[i - 1] = '\0';//ע�������±��0��ʼ����4���ַ����±���3
    std::cout << st << std::endl;
    if (i > 1) f(st, i - 1);
}

int main() {
    char st[] = "abcd";
    f(st, 4);
    return 0;
}