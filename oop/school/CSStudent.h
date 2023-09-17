//
// Created by 叶小辉 on 2023/5/8.
//

#ifndef C_PLUS_CSSTUDENT_H
#define C_PLUS_CSSTUDENT_H
#include <string>

using namespace std;

class CSStudent {
private:
    string name;
    string id;
    char gender;
    int age;
public:
    void printInfo();
    void setInfo(const string &, const string &, int, char);
    void setName(string);
    string getName();
    void setId(string);
    string getId();
};

void CSStudent::printInfo() {

}

#endif //C_PLUS_CSSTUDENT_H
