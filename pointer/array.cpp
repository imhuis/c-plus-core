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


    char ca1[] = {'C', '+', '+'}; // no null
    char ca2[] = {'C', '+', '+', '\0'}; // explicit null
    char ca3[] = "C++"; // null terminator added automatically

}