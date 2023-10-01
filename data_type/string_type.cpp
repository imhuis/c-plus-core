//
// Created by 叶小辉 on 2023/6/16.
//

// 字符串
#include <iostream>

using namespace std;

int main() {
    char str1[] = "hello world";
    double salary = 9999.99,
            wage(salary + 0.01);
// ok: mix of initialized and uninitialized
    int interval,
            month = 8, day = 7, year = 1955;
// ok: both forms of initialization syntax used
    std::string title("C++ Primer, 4th Ed."),
            publisher = "A-W";

    string text("Hello World");
    for (string::size_type i = 0; i != text.size(); i++) {
        cout << text[i];
    }
    isdigit('2')

}

void fun1()
{
    string  str1 = "hello";

    string str3 = "abc" + str1;
    string str4 = str1 + "abc";
    string str5 = str1 + "abc" + "a";
    string str6 = str1 + "abc" + str1;
//    string str7 = "abc" + "," + "abc";
}