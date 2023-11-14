//
// Created by 叶小辉 on 2023/11/12.
//

#include "iostream"

using namespace std;

void increment(int *);

int main() {
    int a[5];
    a[0] = 1;
    a[1] = 2;
    a[3] = 3;

    int *p = &a[0] ;
    cout << p << endl;
    cout << *p << endl;
    cout << *(p + 1) << endl;
}

void increment(int *a) {
    *a = *a + 1;
}