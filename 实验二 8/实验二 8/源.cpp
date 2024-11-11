#include <iostream>
#include <cmath>

double sqrtIteration(double a) {
    double xn = a;
    double xn1;
    do {
        xn1 = 0.5 * (xn + a / xn);
        if (std::abs(xn1 - xn) < 1e-5) {
            break;
        }
        xn = xn1;
    } while (true);
    return xn1;
}

int main() {
    double a;
    std::cout << "请输入一个数: ";
    std::cin >> a;
    std::cout << "其平方根约为: " << sqrtIteration(a) << std::endl;
    return 0;
}