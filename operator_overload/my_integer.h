//
// Created by 叶小辉 on 2023/10/7.
//

#ifndef C_PLUS_MY_INTEGER_H
#define C_PLUS_MY_INTEGER_H

#include <ostream>

class MyInteger {
private:
    int number;
public:
    MyInteger(){}
    MyInteger(int n) {
        number = n;
    }
    // 前置递增
    MyInteger operator++();
//    MyInteger& operator++();
    // 后置递增
    MyInteger operator++(int);

    friend std::ostream &operator<<(std::ostream &os, const MyInteger &integer);
};

#endif //C_PLUS_MY_INTEGER_H
