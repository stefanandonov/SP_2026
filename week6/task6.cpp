//
// Created by Stefan Andonov on 26.11.26.
//


#include<iostream>
using namespace std;

int main () {

    int n;
    cin >> n;

    int array [100];
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    for (int i = 0; i < n/2; ++i) {
        if (array[i]!=array[n-i-1]){
            cout << "NOT MIRROR";
            return 0;
        }
    }

    cout << "MIRROR";
    return 0;
}