//
// Created by 叶小辉 on 2023/9/17.
//

#ifndef C_PLUS_DERIVED_H
#define C_PLUS_DERIVED_H

class DerivedClass: public BaseClass {
    int v1, v3;
private:
    float y;
public:
    DerivedClass(int v){
        v1 = 2;
        v3 = v;
    }
    void print(const another &k);
};

class another {
private:
    int aaa;
public:
    another() {
        aaa = 111;
    }

    // 友元关系不被继承
    friend void BaseClass::print(const another &k);
    friend void DerivedClass::print(const another &k);
};

#endif //C_PLUS_DERIVED_H
