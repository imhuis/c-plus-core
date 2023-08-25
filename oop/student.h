//
// Created by 叶小辉 on 2023/5/6.
//

#ifndef C_PLUS_STUDENTS_H
#define C_PLUS_STUDENTS_H

#include "my_date.h"
#include <string>
#include "iostream"

using namespace std;

class Student {
public:
    Student();
    Student(string);
    Student(string, MyDate);
    ~Student() {
        cout << "Student 析构函数" << endl;
    }

    void setName(string);
    string getName();
    void printStudent() const;

private:
    string name;
    MyDate birthday;

};

Student::Student() {
    cout << "Student 构造函数" << endl;
}

Student::Student(string s) {
    name = s;
    birthday.setDate(MyDate());
    cout << "Student 构造函数" << endl;
}

Student::Student(string s, MyDate date) {
    name = s;
    birthday = date;
    cout << "Student 构造函数" << endl;
}

void Student::setName(string n) {
    name = n;
}

string Student::getName() {
    return std::string();
}

void Student::printStudent() const {
    cout << "姓名:" << name << endl;
    cout << "生日:";
    birthday.printData();
}


#endif //C_PLUS_STUDENTS_H
