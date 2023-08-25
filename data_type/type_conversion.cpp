//
// Created by 叶小辉 on 2023/7/4.
//
#include <iostream>

using namespace std;

int main()
{
    int ival = 0;
    ival = 3.14 + 3;
    // double >> int
    cout << ival << endl;
    return 0;
}

void force() {
    double dval;
    int ival;
    ival *= static_cast<int>(dval);
}