//
// Created by Stefan Andonov on 15.10.26.
//


#include<iostream>
using namespace std;

int main () {

    int price;
    cin >> price;

//    cout << "Price with tax (DDV): " << price + (price*18.0/100.0);
    cout << "Price with tax (DDV): " << price * 1.18;
    return 0;
}