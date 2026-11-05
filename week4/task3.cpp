//
// Created by Stefan Andonov on 5.11.26.
//


#include<iostream>

using namespace std;

int main() {

    int a, b;

    cin >> a >> b;

//    int rev = 0; NOOOO GOD NO! inside the loop, different for each i!

    for (int i = a; i <= b; ++i) {
        int rev = 0;

//        while (i) {
//
//        } 2. NO GOD NO! it destroys i
        int temp = i;

        while (temp) {
            int digit = temp % 10;
            rev = 10 * rev + digit;
            temp /= 10;
        }
//        cout << i << "->" << rev << endl;

        if (i == rev) {
            cout << i << endl;
        }
    }
    return 0;
}