//
// Created by YeJiahu on 10/9/2023.
//

#include "iostream"
#include "complex"

using namespace std;

int main() {
    complex<double> c1(1, 2);
    complex<double> c2{2, 4};
    cout << c1 << endl;
    cout << c2 << endl;
    cout << "c1 real: " << c1.real() << endl;
    cout << c1 + c2 << endl;
}
