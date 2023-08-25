//
// Created by 叶小辉 on 2023/5/2.
//

#ifndef C_PLUS_MY_DATE_H
#define C_PLUS_MY_DATE_H

class MyDate {
public:
    MyDate();
    ~MyDate();
    MyDate(int);
    MyDate(int, int);
    MyDate(int, int, int);
    void setDate(int, int, int);
    void setDate(MyDate);
    MyDate getDate();
    void setYear(int);
    int getMonth();
    void printData() const;
private:
    int year,month,day;
public:
    wchar_t abc;
};


#endif //C_PLUS_MY_DATE_H
