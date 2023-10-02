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
void swap(int *p1, int *p2);

int main() {
//    printPtr();

    // 常量指针，不可以修改解引用数据
    const int * ptr;

    // 指针常量，需要一开始初始化指针
    int * const ptrr = nullptr;


    int *p1 = new int (1);
    int *p2 = new int (2);
    swap(p1, p2);
    cout << *p1 << "\t" << *p2 << endl;

    int i1 = 3;
    int i2 = 4;
    swap(&i1, &i2);
    cout << i1 << "\t" << i2 << endl;
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

void swap(int * p1, int * p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}