//
// Created by 叶小辉 on 2023/5/7.
//

#include "class_member.h"
#include <iostream>

using namespace std;

int glos = 100;

// 初始化静态成员变量必须在类体外
int H::num = 10;

H::H() {
    cout << "H的无参构造函数" << endl;
};

H::H(const H &h) {

}

H::~H() {
    cout << "H的析构函数" << endl;
};

//classA::classA() {
//
//}

void H::say_something() {

}

void H::do_something() const {

}

void H::s_method() {
    cout << "H的静态成员函数" << endl;
}


int main() {
//    int a = 1;
//    static int fs = 1;
//    cout << "a:" << a << "\tfs:" << fs << "\tglos:" << glos << endl;
//    a += 2;
//    fs += 2;
//    glos += 10;
//    cout << "a:" << a << "\tfs:" << fs << "\tglos:" << glos << endl;

    // 编译器认为是函数声明
    //    H h();
    H h;

}


void a() {
    const H a;
    // 常量对象只能调用常量成员函数
    a.do_something();

    H b;
    b.do_something();
    b.say_something();

}

// 测试常量成员和常引用成员
void b() {
//    I ff(11);
//    ff.do_something();
    I b(1);
    b.do_something();
//    b.con_method();

    const I bb(1);
//    bb.con_method();

}

void I::do_something() {

}
