//
// Created by Stefan Andonov on 26.11.26.
//


#include<iostream>
using namespace std;

int main () {

    int n;
    cin >> n;

    int temperatures[100];

    double sum = 0;

    for (int i = 0; i < n; ++i) {
        cin >> temperatures[i];

        sum += temperatures[i];
    }

    double average = sum/n;

    for (int i = 0; i < n; ++i) {
        cout << fabs(temperatures[i] - average) << endl;
    }


    return 0;
}