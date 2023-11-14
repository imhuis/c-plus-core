//
// Created by 叶小辉 on 2023/6/19.
//
#include <iostream>

using namespace std;

int main()
{
    // both buf_size and max_files are const
    const unsigned buf_size = 512, max_files = 20;
    int staff_size = 27; // nonconst
    char input_buffer[buf_size]; // ok: const variable
    string fileTable[max_files + 1]; // ok: constant expression
    double salaries[staff_size]; // error: non const variable

    int A[10];
    // 实际上是一个指针
    int *ap = A;

}