//
// Created by 叶小辉 on 2023/10/6.
//

#include "class_member.h"

void I::do_something() {

}

// 前向声明
void a();
void b();

int main() {
    a();
}


void a() {
    const H a;
    // 常量对象只能调用常量成员函数
    a.c_method();

    H b;
    b.c_method();
    b.method1();

}

// 测试常量成员和常引用成员
void b() {
//    I ff(11);
//    ff.c_method();
    I b(1);
    b.do_something();
//    b.con_method();

    const I bb(1);
//    bb.con_method();

}