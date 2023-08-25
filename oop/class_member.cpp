//
// Created by 叶小辉 on 2023/5/7.
//

#include "class_member.h"
#include <iostream>

using namespace std;

int glos = 100;

// 初始化静态成员变量必须在类体外
int H::num = 10;

//classA::classA() {
//
//}

void H::say_something() {

}

void H::do_something() const {

}



int main() {
    int a = 1;
    static int fs = 1;
    cout << "a:" << a << "\tfs:" << fs << "\tglos:" << glos << endl;
    a += 2;
    fs += 2;
    glos += 10;
    cout << "a:" << a << "\tfs:" << fs << "\tglos:" << glos << endl;
}



void a()
{
    const H a;
    // 常量对象只能调用常量成员函数
    a.do_something();

    H b;
    b.do_something();
    b.say_something();

}

// 测试常量成员和常引用成员
void b()
{
//    classB ff(11);
//    ff.do_something();
    classB b(1);
    b.do_something();
    b.con_method();

    const classB bb(1);
    bb.con_method();

}

void classB::do_something() {

}
