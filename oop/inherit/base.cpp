//
// Created by 叶小辉 on 2023/8/25.
//

#include "iostream"
#include "base.h"
#include "derived.h"

using namespace std;

int main() {
    BaseClass base;
    DerivedClass derived = DerivedClass(222);
    another another;
    base.print(another);
    derived.print(another);
}

// 静态变量需要初始化后才能使用
int BaseClass::staV = 999;

void BaseClass::print(const another &k) {
    cout << "BaseClass: " << k.aaa << "  static V's " << BaseClass::staV << endl;
}

void DerivedClass::print(const another &k) {
    cout << "DerivedClass-- [v1]: " << v1 << " [BaseClass::v1]: " << BaseClass::v1 << endl;
    // 友元关系
    cout << "DerivedClass: " << k.aaa << endl;
}