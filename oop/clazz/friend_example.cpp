//
// Created by 叶小辉 on 2023/5/19.
// 友元类的示例
//

#include "class_member.h"
#include "iostream"

using namespace std;

void GoodGay::visit(House *house) {
    // 友元类才能访问 house->bedRoom
    cout << "友元类示例：" << house->settingRoom << " " << house->bedRoom << endl;
}

GoodFriend::GoodFriend() {
    house = new (House);
}

void GoodFriend::visit1() {
    cout << "友元成员函数， " << house->settingRoom << " " << house->bedRoom << endl;
}

// 不是House的友元函数所以不能访问私有成员
void GoodFriend::visit2() {
    cout << "非友元成员函数， " << house->settingRoom << endl;
}

void visit(House *house){
    cout << "全局函数示例：" << "正在访问 " << house->settingRoom << endl;
    cout << "全局函数示例：" << "正在访问 " << house->bedRoom << endl; // 友元类
}

int main() {
    House h;
    visit(&h);

    GoodGay goodGay;
    goodGay.visit(&h);

    GoodFriend goodFriend;
    goodFriend.visit1();
    goodFriend.visit2();
}