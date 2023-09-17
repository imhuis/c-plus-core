//
// Created by 叶小辉 on 2023/5/19.
//

#include "class_size.h"
#include <iostream>

using namespace std;

/*
 * sizeof
 */
int main()
{
    BaseClass b;
    DerivedClass d;
    cout << "Base Class' size: " << sizeof(b) << endl;
    cout << "Derived Class's size: " << sizeof(d) << endl;

}