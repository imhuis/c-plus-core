//
// Created by 叶小辉 on 2023/8/24.
//

#include "object/my_date.h"
#include "object/student.h"

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