//
// Created by 叶小辉 on 2023/8/24.
//

#include "iostream"

using namespace std;

// format 1
class A {
private:
    int a;
    char b;
    std::string c;
public:
    A() {}

    A(int a, char b, std::string c) : a(a), b(b), c(c) {}
};

// format 2
class B {
    int a;
    char b;
    std::string c;

    B(int aa, char bb, std::string cc) {
        a = aa;
        b = bb;
        c = cc;
    }

};

// format 3
class C {
public:
    int a;
    char b;
    std::string c;
    C() {
        a = initA();
    }
    int initA(){};
};

// 复制构造函数
class D {
public:
    // 可以省略对象名
    D(const D &d){};
    D(D &d){};
};