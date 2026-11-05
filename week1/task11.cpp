//
// Created by Stefan Andonov on 15.10.26.
//


#include<iostream>
using namespace std;

int main () {

    int number;

    cin >> number;

    cout << "Most significant digit: " << number / 100 << endl;
    cout << "Least signigicant digit: " << number % 10 << endl;
    return 0;
}