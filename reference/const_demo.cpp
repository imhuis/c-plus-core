//
// Created by 叶小辉 on 2023/7/4.
//
/**
* const类型变量 及 const指针区别
*/
#include <iostream>

using namespace std;

int main() {
    // 常量必须初始化
    int a = 0;
    const int aa = 1;
    const int *ii = &a;
    const int *iii = &aa;
    // int *iiii = &aa; 非法
    const int *ci = new int(100);
    ci = &aa;
    const int *const cci = new int(200);
//    cci = &aa;

    cout << ci << endl;
    cout << cci << endl;
    return 0;
}