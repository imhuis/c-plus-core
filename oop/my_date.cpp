//
// Created by 叶小辉 on 2023/5/2.
//

#include "my_date.h"
#include <iostream>

using namespace std;

MyDate::MyDate() {
    year = 2023;
    month = 5;
    day = 5;
}

MyDate::~MyDate() {
    cout << "myDate 析构函数" << endl;
}

MyDate::MyDate(int y): year(y), month(1), day(1){
    cout << "MyDate 构造函数" << endl;
}

MyDate::MyDate(int y, int m): year(y), month(m), day(1){
    cout << "MyDate 构造函数" << endl;
}

MyDate::MyDate(int y, int m, int d): year(y), month(m), day(d){
    cout << "MyDate 构造函数" << endl;
}

void MyDate::setDate(int y, int m, int d) {
    year = y;
    month = m;
    day = d;
}

void MyDate::setDate(MyDate date) {
    year = date.year;
    month = date.month;
    day = date.day;
}

MyDate MyDate::getDate() {
    return *this;
}

void MyDate::setYear(int y) {
    year = y;
    return;
}

int MyDate::getMonth() {
    return this->month;
}

void MyDate::printData() const {
    cout << "Date: " << year << "/" << month << "/" << day << endl;
}
