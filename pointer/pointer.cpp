//
// Created by 叶小辉 on 2023/6/20.
//
#include <iostream>

using namespace std;
int main()
{
//    int arr[] = {0,1,2,3};
//    int last = *(arr + 22);
//
//    for (int *begin = arr, *end = arr + 4; begin != end; begin++) {
//        cout << *begin << endl;
//    }

    const int *pci_ok = new const int[100]();
    const string *pcs = new const string[100]();
    int *pia2 = new int[10] ();
    const char ca[] = {'h', 'e', 'l', 'l',
                       'o'};
    const char *cp = ca;
    while (*cp) {
        cout << *cp << endl;
        ++cp;
    }

}