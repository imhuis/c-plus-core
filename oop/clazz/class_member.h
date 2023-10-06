//
// Created by 叶小辉 on 2023/5/7.
//

#ifndef C_PLUS_CLASS_MEMBER_H
#define C_PLUS_CLASS_MEMBER_H

class H {
public:
    int num;
    // 静态成员变量
    static int s_num;
    mutable int m_m;

    // 无参构造函数
    H();

    // 复制构造函数
    H(const H &);

    // 析构函数
    ~H();

    void method1();

    // 常量成员函数
    /**
     * 相当于 const TYPE * const this
     */
    void c_method() const;

    static void static_method();
};

class I {
public:
    // 常量成员
    const int cc;
    const int &dd;

    void do_something();
//    int con_method() const;

    I(int cc, int &dd) : cc(cc), dd(dd) {}

    I(const int &dd) : cc(0), dd(dd) {}
};


#endif //C_PLUS_CLASS_MEMBER_H
