//
// Created by 叶小辉 on 2023/11/13.
//
#include "iostream"

using namespace std;
int SumOfElements(int arr[], int len) {
    int sum;
    for (int i = 0; i < len; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {1,2,3,4,5};
    int len = sizeof(arr) / sizeof(arr[0]);
    int sum = SumOfElements(&arr[0], len);
    cout << sum << endl;
}