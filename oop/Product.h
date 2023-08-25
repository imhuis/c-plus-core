//
// Created by 叶小辉 on 2023/8/23.
//

#ifndef C_PLUS_PRODUCT_H
#define C_PLUS_PRODUCT_H
#include <iostream>

using namespace std;

class Product {
private:
    char *name;
    int count;
    double totalPrice;
public:
    void doA(){doB();};
    void doB(){};
    void doC(std::string str = "Hello World"){

    };
    inline void print();
};

void Product::print() {
    cout << name << endl;
}

void print() {
    // error,can't resolve name in class.
//    cout << name << endl;
}

#endif //C_PLUS_PRODUCT_H
