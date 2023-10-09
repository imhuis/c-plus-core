//
// Created by YeJiahu on 10/9/2023.
//

#include "iostream"
#include "iomanip"

#define PI 3.1415926

using namespace std;

int main() {
    cout << showpoint << 123.0 << endl;

    int x = 56;
    int &r = x;
    cout << "x = " << &x << endl;
    cout << "r = " << &r << endl;


    cout << "PI = " << PI << endl;
    // 四舍五入
    cout << "PI = " << setprecision(1) << PI << endl;
//    cout << noshowpos << 123.00 << endl;
//    cout << noshowbase << 123.00 << endl;
//    cout << noshowpoint << 123.00 << endl;

    cout << 29 << setw(5) << 1001 << endl;

    int m = 1;
    int n = 3;
    n = m--;
    cout << n << endl;
}