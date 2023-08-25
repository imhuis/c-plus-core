//
// Created by 叶小辉 on 2023/6/16.
//
#include <iostream>

using namespace std;
int main()
{
    int i = 2;
    int a = 9, b = 7;
    int c = 011, d = 07;
    cout << a << " " << b << endl;
    cout << c << " " << d << endl;


    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;

    cout << "int is " << sizeof(n_int) << " bytes." << endl;
    cout << "short is " << sizeof(n_short) << " bytes." << endl;
    cout << "long is " << sizeof(n_long) << " bytes." << endl;

    cout << "Maximum values:" << endl;
    cout << "int:" << n_int
         << "\tshort:" << n_short
         << "\tlong:" << n_long << endl;

    cout << "int min:" << INT_MIN << endl;
    cout << "bit:" << CHAR_BIT << endl;
}