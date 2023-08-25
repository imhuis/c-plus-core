//
// Created by 叶小辉 on 2023/5/6.
//

#include "student.h"
#include <iostream>

int main() {
    Student stud;
    stud.setName("111");

    Student s0(stud);

    Student *spointer[2] = {new Student(), &stud};
    Student sy[2] = {Student(), stud};

    for (int i = 0; i < 2; ++i) {
        spointer[i]->printStudent();
        cout << &spointer[i] << endl;
    }

    cout << endl;

    for (int i = 0; i < 2; ++i) {
        sy[i].printStudent();
    }

    stud.setName("222");
    for (int i = 0; i < 2; ++i) {
        spointer[i]->printStudent();
    }
    spointer[0]->setName("333");
    spointer[1]->setName("444");
    for (int i = 0; i < 2; ++i) {
        spointer[i]->printStudent();
        cout << &spointer[i] << endl;
    }
    stud.printStudent();

    for (int i = 0; i < 2; ++i) {
        sy[i].printStudent();
        cout << &sy[i] << endl;
    }
}

