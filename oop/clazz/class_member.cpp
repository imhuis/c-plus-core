//
// Created by 叶小辉 on 2023/5/7.
//

#include "class_member.h"
#include <iostream>

using namespace std;

// 初始化静态成员变量必须在类体外
int H::s_num = 10;

H::H() {
    cout << "H的无参构造函数" << endl;
};

H::H(const H &h) {

}

H::~H() {
    cout << "H的析构函数" << endl;
}

void H::method1() {
    cout << "H的普通函数" << endl;
    //    this -> NULL; 指针值不可以修改
}

void H::c_method() const {
    // mutable 可以在常量函数中被修改
    this->s_num = 100;
    this->m_m = 100;
    //    this -> NULL; 指针值不可以修改
    //    this->num = 100; this指针指向的值不能修改

    cout << "H的常量成员函数" << endl;
}

void H::static_method() {
    cout << "H的静态成员函数" << endl;
}


int main() {

    // 编译器认为是函数声明
    //    H h();
    H h;

}

