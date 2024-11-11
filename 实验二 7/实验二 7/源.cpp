#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++)//外层循环控制行数

    {
        for (int j = 1; j <= i; j++){//内层循环控制每行星号数量{

            cout << '*';
    }
            cout <<endl;
          // 换行，输出下一行
    }
    return 0;
}