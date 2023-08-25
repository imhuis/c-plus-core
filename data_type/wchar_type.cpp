//
// Created by 叶小辉 on 2023/6/15.
//
#include <iostream>

int main()
{
    std::cout << "a multi-line "
                 "string literal "
                 "using concatenation"
            << std::endl;

    wchar_t str = 'hello world';
    std::cout << str << std::endl;

    std::cout << "multi-line " << L"literal " << std::endl;
}
