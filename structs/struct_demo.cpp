//
// Created by 叶小辉 on 2023/10/1.
//
#include "string"
#include "iostream"
#include "student.h"

using namespace std;


int main() {
    //
    struct Student s = {"yang", 18};
    Student * sp = &s;
    cout << sp->name << endl;
}

void func() {
    //
    struct Student stu = {

    };

    // structs array
    struct Student stuArr[3] = {
            {"", 22},
            {"", 21},
            {"", 18},
    };
    for(int i = 0; i < 3; i++) {
        cout << "name:" << stuArr[i].name <<
             "age:" << stuArr[i].age << endl;
    }
}