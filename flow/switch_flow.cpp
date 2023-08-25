//
// Created by 叶小辉 on 2023/7/12.
//
#include <iostream>

static void count();

void test();

using namespace std;

int main()
{
    count();
}

void test()
{
    bool x;
    switch (x) {
        case true:
        {
            string fileName = "";
            break;
        }
        case false:
             string fileName = "";
            break;
    }
}

static void count() {
    char ch;
    int aCnt,eCnt,iCnt,oCnt,uCnt = 0;
    while (cin >> ch) {
        switch (ch) {
            case 'a':
                ++aCnt;
                break;
            case 'e':
                ++eCnt;
                break;
            case 'i':
                ++iCnt;
                break;
            case 'o':
                ++oCnt;
                break;
            case 'u':
                ++uCnt;
                break;
        }
    }
}

void count_char() {
    char ch;
    while (cin.get(ch)) {
        switch (ch) {
            case '\t':
                break;
            case '\n':
                break;
        }
    }
}