//
// Created by 叶小辉 on 2023/11/15.
//

#include "iostream"

using namespace std;

/**
 * B[i][j] = *(B[i] + j)
 *         = *(*(B+i) + j)
 * @return
 */

int main() {
    int A[2][3] = {{2,4,6}, {8,9,10}};

    int (*b)[3] = &A[0];

    cout << "A address: " << A << endl;
    cout << "A address: " << A[0] << endl;
    cout << "A address: " << &A[0] << endl; // 一维数组内存地址
    cout << "A address: " << &A[0][0] << endl;

    // A[1]数组的第一个元素的内存地址 0x---------
    cout << b + 1 << endl; // same 0x---------
    cout << A[1] << endl; // same 0x---------
    cout << *(A+1) << endl; // same 0x---------

    int *p = *(A+1)+2;
    cout << "p's address: " << p << "\tp's value: " << *p << endl;

    int f = *(*A + 1);
    cout << *(&A[0][1]) << endl; // 4
    cout << A[0][1] << endl; // 4
    cout << f << endl; // 4

}