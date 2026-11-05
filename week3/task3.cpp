//
// Created by Stefan Andonov on 29.10.26.
//


#include<iostream>

using namespace std;

int main() {

    double x;
    int n;

    cin >> x >> n;

    double y = 1.0;

    int i=0;
    while (i<n){
        y *= x;
        i++;
    }

//    for (int i = 0; i < n; i++) {
//        y *= x;
//        cout << y << endl;
//    }

    cout << x << " ^ " << n << " = " <<y;


    return 0;
}