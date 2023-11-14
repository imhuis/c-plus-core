//
// Created by 叶小辉 on 2023/10/8.
//

#include "iostream"

using namespace std;

int main() {

    int x = 5,y = 6;
    const int p = x;
    p = y;
    cout << *p << endl;
}
