//
// Created by 叶小辉 on 2023/10/7.
//

#include "my_integer.h"
#include "iostream"

using namespace std;

MyInteger MyInteger::operator++() {
    number++;
}

MyInteger MyInteger::operator++(int a) {
    int temp = number;
    number++;
    return temp;
}

ostream &operator<<(ostream &os, const MyInteger &integer) {
    os << "number: " << integer.number;
    return os;
}

int main() {
    MyInteger myInteger(100);
    ++myInteger;
    cout << myInteger << endl;

    cout << "=======" << endl;

    MyInteger in(100);
    cout << in++ << endl;
    cout << in << endl;
}