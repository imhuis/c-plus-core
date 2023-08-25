//
// Created by 叶小辉 on 2023/8/24.
//

#include "iostream"

using namespace std;

class Ctyre {
private:
    int radius, width;
public:
    Ctyre() : radius(10), width(10) {}

    Ctyre(int a, int b) : radius(a), width(b) {}

    int getRadius() {
        return radius;
    }

    int getWidth() {
        return width;
    }

};

class Car {
private:
    int price;
    Ctyre ctyre;
public:
    Car();

    Car(int p, int r, int w);

    int getPrice() {
        return price;
    }

    Ctyre getType() {
        return ctyre;
    }

};

Car::Car() {
    price = 50000;
    Ctyre();
}

Car::Car(int p, int r, int w):ctyre(r,w) {
    price = p;
}

int main() {
    Car car;
    cout << car.getPrice() << endl;
}
