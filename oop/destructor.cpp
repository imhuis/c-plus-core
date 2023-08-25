//
// Created by 叶小辉 on 2023/8/24.
//

#include "my_date.h"
#include "student.h"

/**
* 析构函数:
 * 没有参数
*/
class E {
    ~E() {

    }
};

int main() {
//    MyDate d = MyDate();
    Student *stu = new Student("john");

    delete stu;

}