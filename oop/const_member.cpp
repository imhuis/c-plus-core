//
// Created by 叶小辉 on 2023/8/24.
//

/**
* 常量成员
*/

#include "object/my_date.h"
#include "object/student.h"
class K;

class K{
public:
    // 常量成员
    const int a;
    int b;

    K(int aa):a(aa){
    }

    // 常量函数
    void getValue() const {};
    // 非常量函数
    void getText() {};

    void increase(int number) const {
//        b += number;
    }
};

int main() {
    const K k(1);
    K kk(1);
    k.getValue();
    // 常量对象不能调用普通函数
//    k.getText();

    kk.getValue();
    kk.getText();

}

