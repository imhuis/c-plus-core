//
// Created by 叶小辉 on 2023/9/29.
//
#include "inherit_permission.h"
#include "iostream"

using namespace std;

void Base::SetPriValue(int k) {
    vBPri = k;
}

void Base::SetProValue(int m, int n) {
    vBPro = m;
    vBPri = n;
}

int Base::GetPriValue() {
    return vBPri;
}

int Base::GetProValue() {
    return vBPro;
}

void Derived::SetPriValue(int k) {
    vDPri = k;
}

void Derived::SetProValue(int m, int n) {
    vDPro = m;
    vDPri = n;
    vBPro = 2 * m;
//    Base::vBPro = 2*n;
}

int Derived::GetPriValue() {
    return vDPri;
}

int Derived::GetProValue() {
    return vDPro;
}

void Derived::PrintValue() {
    cout << vBPub << endl;
    cout << vBPro << endl;
    cout << Base::GetPriValue() << endl;

    cout << vDPub << vDPro << vDPri << endl;
    cout << Base::vBPro << Base::vBPub << endl;
}


int main() {
    Base bObj;
    Derived dObj;
    cout << bObj.vBPub << endl;
//    cout << bObj.vBPro << endl;
    cout << bObj.GetProValue() << endl;
    cout << bObj.GetPriValue() << endl;

    cout << dObj.vDPub << endl;
    cout << dObj.Base::vBPub << endl;

    cout << dObj.GetProValue() << endl;
    cout << dObj.Base::GetProValue() << endl;

    cout << dObj.GetPriValue() << endl;
    cout << dObj.Base::GetPriValue() << endl;

}