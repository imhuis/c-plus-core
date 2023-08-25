//
// Created by 叶小辉 on 2023/5/4.
//

#include "point_demo.h"
#include <iostream>

using namespace std;

int main()
{
    int oneInt = 6;
    int * q = &oneInt;
    // 不可以删除引用
//    delete q;
    int * p;
    p = new int [10];
    delete [] p;
    p[0] = 10;
    p[9] = 20;
    cout << p[0] << endl;
    cout << p[9] << endl;
    return 0;
}

void rr()
{
    int a1 = 3;
    const int a2 = a1;
    int * a3 = &a1;
    *a3 = 5;

    const int * a4 = &a1;

    int * const a5 = &a1;
    *a5 = 6;
    int const * const a6 = &a1;
    const int * const a7 = &a1;
}

void point_addr()
{
    int var = 10;
    int *ip;

    ip = &var;

    cout << ip << endl;
    cout << *ip << endl;
}
