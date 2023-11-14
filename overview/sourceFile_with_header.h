//
// Created by 叶小辉 on 2023/6/18.
//

#ifndef C_PLUS_SOURCEFILE_WITH_HEADER_H
#define C_PLUS_SOURCEFILE_WITH_HEADER_H

#define PI 3.1415926

class Circle {
private:
    double radius;
public:
    double getArea();

    double getPerimeter() {
        return 2 * PI * radius;
    };
};

#undef PI

class Rectangle {
public:
    double width;
    double height;

    double getArea();

    double getPerimeter() {
        // PI is not defined here
        //       return PI;
    };
};

#endif //C_PLUS_SOURCEFILE_WITH_HEADER_H
