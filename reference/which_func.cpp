//
// Created by 叶小辉 on 2023/10/2.
//
#include "iostream"
using namespace std;

void func(int &a) {
    cout << "invoke func(int &)" << endl;
}

void func(const int &a) {
    cout << "invoke func(const int &)" << endl;
}

int main() {
    int a = 10;
    int &b = a;
    func(a);
    func(b);

    // 调用const
    func(10);
    const int &i = 10;

    return 0;
}

