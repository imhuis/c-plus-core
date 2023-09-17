//
// Created by 叶小辉 on 2023/8/25.
//

#ifndef C_PLUS_BASE_H
#define C_PLUS_BASE_H

class another;

class BaseClass {
    int v2, v3;
private:
    float a;
public:
    int v1;
    static int staV;
    BaseClass():v1(1),v2(1),v3(1){}
    void print(const another &k);
};

#endif //C_PLUS_BASE_H
