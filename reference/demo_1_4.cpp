//
// Created by 叶小辉 on 2023/4/30.
//

#include "demo_1_4.h"
#include <iostream>

using namespace std;

int & refValue(int & x)
{
    return x;
}

int main()
{
    int x = 10;
    int y = 20;
    refValue(x) = 30;
    cout << x<< endl;
    refValue(y) = 40;
    cout << y << endl;

}



void aa()
{
    int oneInt;
    int &ref = oneInt;
    const int &refc = oneInt;
    ref = 2;
    cout << ref << "\t" << refc << endl;

    oneInt = 3;
    cout << "ref:" << ref << endl;
    cout << "refc:" << refc << endl;
}

void reference_const()
{
    const int cInt = 30;
    int oneInt = 30;
    int &ref = oneInt;

    // 常量引用
    const int &rc1 = cInt;
    const int &rc2 = oneInt;
    const int &rc3 = ref;

    // 变量
    int dInt = ref;
    int eInt = cInt;
    int fInt = rc1;

    // 常量类型
    const int gInt = oneInt;

    int &ref1 = ref;

    const int hInt = ref;
    const int jInt = cInt;
    const int &mInt = rc1;
    const int nInt = rc2;

    int &r2 = (int &) rc1;
    int &r3 = (int &) cInt;

}