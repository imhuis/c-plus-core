//
// Created by 叶小辉 on 2023/5/19.
// 友元类的示例
//

#include <iostream>

using namespace std;

class friendlyClz
{
private:
    double a,b;
public:
    friendlyClz();
    friendlyClz(double, double);
    friend class oper; //友元类
};

//friendlyClz::friendlyClz():a(0),b(0) {}

//friendlyClz::friendlyClz(double a, double b):a(a),b(b){}

friendlyClz::friendlyClz(double a, double b) {
    this->a = a;
    this->b = b;
}

class oper
{
public:
    double add(friendlyClz a, friendlyClz b);
};

double oper::add(friendlyClz a, friendlyClz b) {
    return a.a + a.b;
}
