//
// Created by 叶小辉 on 2023/9/13.
//
#include "iostream"

using namespace std;

int main() {
    int one = 1;
    int &ref = one;
    cout << "&ref's addr: " << &ref << "  &ref's value: " << ref << endl;

    ref = 100;
    cout << "change &ref" << endl;
    cout << "&ref's addr: " << &ref << "  &ref's value: " << ref << endl;


    const int &refc = one;
    cout << "&refc's addr: " << &refc << "  &refc's value: " << ref << endl;

    // one 及 指向其的引用被修改，则指针都会同步修改
//    one = 200;
//    cout<< "change" << endl;
//    cout << "&refc's addr: " << &refc << "  &refc's value: " << ref << endl;

};