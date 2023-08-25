//
// Created by 叶小辉 on 2023/5/7.
// 重载运算符示例
//

#include "my_complex.h"


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
