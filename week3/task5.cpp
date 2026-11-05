//
// Created by Stefan Andonov on 29.10.26.
//


#include<iostream>

using namespace std;

int main() {

    int x;

//    cin >> x;
    unsigned long product = 1;


    for (int x = 1; x < 30; x++) {
        unsigned long product = 1;
        for (int i = 1; i <= x; i++) {
            product *= i;
        }
        cout << x << "->" << product << endl;
    }


//    cout << product;
    return 0;
}