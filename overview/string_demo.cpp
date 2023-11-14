//
// Created by 叶小辉 on 2023/5/1.
//

#include <iostream>
#include <string>

using namespace std;

int main(){
    char name[] = "C++数组1";
    string abc = name;
    cout << abc << endl;
    cout << name << endl;
    cout << sizeof(name) << "//" << sizeof(string) << endl;
    return 0;
}