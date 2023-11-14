//
// Created by 叶小辉 on 2023/5/7.
// 重载运算符示例
//

#include "my_complex.h"

myComplex::myComplex() {
    real = 0;
    imag = 0;
}

myComplex::myComplex(double r, double i) : real(r), imag(i) {}

void myComplex::outCom() {
    cout << "(real:" << real << ",imag:" << imag << ")" << endl;
}

myComplex myComplex::operator+(const myComplex &rc) {
    return myComplex(real + rc.real, this->imag + rc.imag);
}

myComplex myComplex::operator-(myComplex &rc) {
    return myComplex(this->real - rc.real, this->imag - rc.imag);
}

myComplex operator*(const myComplex &rc1, const myComplex &rc2) {
    return myComplex(rc1.real * rc2.real, rc1.imag * rc2.imag);
}

myComplex &myComplex::operator=(const myComplex &rc) {
    this->real = rc.real;
    this->imag = rc.imag;
    return *this;
}

myComplex &myComplex::operator=(double r) {
    this->real = r;
    this->imag = 0;
    return *this;
}

ostream &operator<<(ostream &os, const myComplex &rc) {
    if (rc.imag >= 0) {
        os << rc.real << "+" << rc.imag << "i" << endl;
    } else {
        os << rc.real << "-" << -rc.imag << "i" << endl;
    }
    return os;
}

istream &operator>>(istream &is, myComplex &rc) {
    string s;
    is >> s;
    int pos = s.find("+", 0);
    if (pos == -1) {
        pos = s.find("-", 1);
    }
    string sReal = s.substr(0, pos);
    rc.real = atof(sReal.c_str());
    sReal = s.substr(pos, s.length() - pos - 1);
    rc.imag = atof(sReal.c_str());
    return is;
}

int main() {
    myComplex c1(1, 2), c2(2, 3), res;
    c1.outCom();
    c2.outCom();
    res = c1 + c2;
    res.outCom();

    res = c1 - c2;
    res.outCom();


    myComplex rc1,rc2;
    int n;
    cin >> rc1 >> rc2 >> n;
    cout << rc1 << rc2 << n << endl;
    return 0;
}
