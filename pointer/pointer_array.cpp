//
// Created by 叶小辉 on 2023/6/20.
//
#include <iostream>

using namespace std;

int main()
{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    int *p = arr;
//    cout << *p << endl;
//    p++;
//    cout << *p << endl;

    int arr[] = {0,1,2,3};
//    int last = *(arr);
//    cout << last << endl; // no work

    for (int *begin = arr, *end = arr + 4; begin != end; begin++) {
        cout << *begin << "\t" << end;
    }
    cout << endl;

    const int *pci_ok = new const int[100]();
    const string *pcs = new const string[100]();
    int *pia2 = new int[10] ();
    const char ca[] = {'h', 'e', 'l', 'l','o'};
    const char *cp = ca;
    while (*cp) {
        cout << *cp << "\t" << std::endl;
        ++cp;
    }

}