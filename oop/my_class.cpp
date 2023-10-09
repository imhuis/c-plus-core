//
// Created by 叶小辉 on 2023/5/4.
//

#include "object/my_class.h"
#include <iostream>

using namespace std;
using namespace N;


void myClass::say_something() {
    cout << "Doing something!" << endl;
}

class zz{
public:
    int zz;
};
int main()
{
    zz c;
    c.zz;
}