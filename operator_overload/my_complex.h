//
// Created by 叶小辉 on 2023/8/25.
//

#ifndef C_PLUS_MY_COMPLEX_H
#define C_PLUS_MY_COMPLEX_H

#include <iostream>

using namespace std;

class myComplex {
private:
    double real, imag;
public:
    myComplex();

    myComplex(double, double);

    void outCom();

    myComplex operator+(const myComplex &rc);

    myComplex operator-(myComplex &rc);

    friend myComplex operator*(const myComplex &rc1, const myComplex &rc2);

    myComplex &operator=(const myComplex &rc);

    myComplex &operator=(double);

    //流插入运算符 左移运算符
    friend ostream &operator<<(ostream &os, const myComplex &rc);

    //流提取运算符
    friend istream &operator>>(istream &is, myComplex &rc);
};

#endif //C_PLUS_MY_COMPLEX_H
