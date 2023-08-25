//
// Created by 叶小辉 on 2023/8/24.
//

/**
 * 初始化构造器demo
 */
#include "my_date.h"

int main() {
    MyDate *pd = new MyDate();
    MyDate *pdd = new MyDate;
    /**
     * ()只有在class未定义默认构造函数时有区别，加了括号系统为成员变量分配内存并初始化为0
     */
    MyDate *pd1 = new MyDate(1998, 1, 5);
    MyDate *pd2 = new MyDate;

    pd -> printData();
    pd1 -> printData();
    pd2 -> printData();

    MyDate myDates[3]={MyDate(), MyDate(), MyDate()};

}
