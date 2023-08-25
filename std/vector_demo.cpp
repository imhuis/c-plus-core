//
// Created by 叶小辉 on 2023/6/19.
//
#include <iostream>
#include <vector>

using std::vector;
int main()
{
    vector<int> vc1;
    vector<int> vc2 (5);
    vector<int> vc3 (10, 100);
    vector<int> vc4 (vc1);

    vc1.empty();
    vc2.size();
    vc1.push_back(1);
    vc3[2]; // 100

    for (vector<int>::iterator i = vc2.begin(); i != vc2.end(); i++) {

        std::cout << *i << std::endl;
    }


}