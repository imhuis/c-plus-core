//
// Created by 叶小辉 on 2023/7/4.
//
#include <iostream>

using namespace std;

void constConv();

int main() {
    constConv();
    return 0;
}

void forceConversion() {
    double d = 1.0;
    int i;
    int oneInt = int(d);
    int twoInt = (int) d;
    int threeInt = d; // 自动
    i *= static_cast<int>(d);
    cout << i << endl;
}

void constConv() {
    int a = 10;
    cout << "a's addr: " << &a << "  a's value: " << a << endl;
    const int *p = &a;
    cout << "*p's addr: " << p << "  *p's value: " << *p << endl;

    int *q;
    // q= p; error
    // const_cast 将常量指针转化为非常量指针，并且仍然指向当前对象
    q = const_cast<int*>(p);
    *q = 20;
    cout << "*q's addr: " << q << "  *q's value: " << *q << endl;
    cout << "*p's addr: " << p << "  *p's value after change: " << *p << endl;


}
