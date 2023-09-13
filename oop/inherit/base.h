//
// Created by 叶小辉 on 2023/8/25.
//

#ifndef C_PLUS_BASE_H
#define C_PLUS_BASE_H

#include "iostream"

using namespace std;

class another;
class Base {
private:
    float a;
public:
    void print(const another &k);
};

class Derived: public Base {
private:
    float y;
public:
    void print(const another &k);
};

class another {
private:
    int aaa;
public:
    another(){
        aaa = 111;
    }
    // 友元关系不被继承
    friend void Base::print(const another &k);
    friend void Derived::print(const another &k);
};

void Base::print(const another &k) {
    cout << "Base: " << k.aaa << endl;
}

void Derived::print(const another &k) {
    cout << "Derived: " << k.aaa << endl;
}

#endif //C_PLUS_BASE_H
