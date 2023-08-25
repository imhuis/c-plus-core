//
// Created by 叶小辉 on 2023/6/16.
//
#include <iostream>

using namespace std;
enum abc {
    a = 2,
    b,
    v
};
int main()
{
    int aa = 1;
    int &refA = aa;

    int bb = 2;
    const int &refB = bb;

    const int cc = 3;
    const int &refC = cc;
}