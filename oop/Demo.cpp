//
// Created by 叶小辉 on 2023/9/29.
//

#include "Demo.h"

class B{

};

class D: public B {

};

int main() {
    B b1, *pb1;
    D d1;
    b1 = d1;
    B &rb = d1;
}