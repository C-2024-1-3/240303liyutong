#include <iostream>
using namespace std;

int main() {
    int day = 1, buy = 2;
    double sum = 0.0, ave;

    do {
        sum += buy * 0.8;
        day++;
        buy *= 2;
    } while (buy <= 100);

    ave = sum / day;

    cout << ave << endl;

    return 0;
}