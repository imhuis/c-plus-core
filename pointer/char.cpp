//
// Created by 叶小辉 on 2023/11/14.
//

#include "iostream"
#include "string"

using namespace std;

int main() {

    char ca1[] = {'C', '+', '+'}; // no null
    char ca2[] = {'C', '+', '+', '\0'}; // explicit null, 显式指定
    char ca3[] = "C++"; // null terminator added automatically, 数组大小 >= 字符个数+1

    cout << ca1 << "\t" << strlen(ca1) << endl;

    // 计算字符串长度的函数计算到NULL字符为止
    cout << ca2 << "\t" << strlen(ca2) << endl;
    cout << ca3 << endl;

}