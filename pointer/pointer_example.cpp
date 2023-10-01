//
// Created by 叶小辉 on 2023/10/1.
//

#include "pointer_example.h"
#include "iostream"

using namespace std;

/**
 * 指针示例
 * @return
 */

void printPtr();

int main() {
//    printPtr();

    // 常量指针，不可以修改解引用数据
    const int * ptr;

    // 指针常量，需要一开始初始化指针
    int * const ptrr = nullptr;

}

void printPtr() {
    int i = 1;
    cout << "i's address: " << &i << endl;
    int *pi = &i;
    cout << "pi's address: " << &i << endl;

    cout << "pointer: " << sizeof(pi) << endl;

    int *np = NULL;
    cout << "null pointer's address: " << np << endl;
}