//
// Created by 叶小辉 on 2023/9/29.
//

#ifndef C_PLUS_BASE_H
#define C_PLUS_BASE_H

class Base {
public:
    int vBPub;
protected:
    int vBPro;
private:
    int vBPri;
public:
    Base() {
        vBPub = 10;
        vBPro = 20;
        vBPri = 30;
    }

    void SetPriValue(int);

    void SetProValue(int, int);

    int GetPriValue();

    int GetProValue();
};

class Derived : public Base {
public:
    int vDPub, vBPub;
protected:
    int vDPro;
private:
    int vDPri;
public:
    Derived() {
        vDPub = 100;
        vDPro = 200;
        vDPri = 300;
        vBPub = 15;
    }

    void SetPriValue(int);

    void SetProValue(int, int);

    int GetPriValue();

    int GetProValue();

    void PrintValue();
};

#endif //C_PLUS_BASE_H
