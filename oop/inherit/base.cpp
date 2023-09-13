//
// Created by 叶小辉 on 2023/8/25.
//

#include "base.h"

int main() {
    Base base;
    Derived derived;
    another another;
    base.print(another);
    derived.print(another);
}