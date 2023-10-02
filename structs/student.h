//
// Created by 叶小辉 on 2023/10/1.
//

#ifndef C_PLUS_STUDENT_H
#define C_PLUS_STUDENT_H
#include "string"


struct Student {
    std::string name;
    int age;
};

struct Teacher {
    Student stu;
};



#endif //C_PLUS_STUDENT_H
