//
// Created by Stefan Andonov on 15.10.26.
//


#include<iostream>

using namespace std;

int main() {

    char c;
    cin >> c;

    if (c >= 'a' && c <= 'z') {
        cout << (char) (c - ('a' - 'A'));
    } else if (c >= 'A' && c <= 'Z') {
        cout << (char) (c + ('a' - 'A'));
    } else {
        cout << "Not a letter";
    }

    return 0;
}