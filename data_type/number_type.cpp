//
// Created by 叶小辉 on 2023/6/16.
//
#include <iostream>

using namespace std;

void printUnsignedNumber();

int main() {

    short sMin = SHRT_MIN;
    short sMax = SHRT_MAX;
    cout << sMin << "\t" << sMax << endl;

    int iMin = INT_MIN;
    int iMax = INT_MAX;
    cout << iMin << "\t" << iMax << endl;

    long lMin = LONG_MIN;
    long lMax = LONG_MAX;
    cout << lMin << "\t" << lMax << endl;

    long long llMin = LLONG_MIN;
    long long llMax = LLONG_MAX;
    cout << llMin << "\t" << llMax << endl;

    int a = 9, b = 7;
    int c = 011, d = 07;
    cout << a << " " << b << endl;
    cout << c << " " << d << endl;

    cout << "short is " << sizeof(short) << " bytes." << endl;
    cout << "int is " << sizeof(int) << " bytes." << endl;
    cout << "long is " << sizeof(long) << " bytes." << endl;
    cout << "long long is " << sizeof(long long ) << " bytes." << endl;

    cout << "bit:" << CHAR_BIT << endl;


    printUnsignedNumber();
}

void printUnsignedNumber() {
    cout << "----Unsigned Number----" << endl;
    short s1;
    signed short s2;
    unsigned short s3;
    cout << "Short Type: " << s1 << "\t" << s2 << "\t" << s3 << endl;

    int i1;
    signed int i2;
    unsigned int i3;
    cout << "Int Type: " << i1 << "\t" << i2 << "\t" << i3 << endl;

    long l1;
    signed long l2;
    unsigned long l3;
    cout << "Long Type: " << l1 << "\t" << l2 << "\t" << l3 << endl;

    char c1;
    unsigned char c2;
    signed char c3;
    cout << "Char Type: " << c1 << "\t" << c2 << "\t" << c3 << endl;
    cout << "----Unsigned Number----" << endl;
}