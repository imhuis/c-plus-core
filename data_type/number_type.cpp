//
// Created by 叶小辉 on 2023/6/16.
//
#include <iostream>

using namespace std;
void printUnsignedNumber();

int main()
{

    printUnsignedNumber();
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

void printUnsignedNumber()
{
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

}