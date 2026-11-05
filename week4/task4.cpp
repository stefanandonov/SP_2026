//
// Created by Stefan Andonov on 5.11.26.
//


#include<iostream>

using namespace std;

int main() {

    int b;

    cin >> b;

    int counter=0;

//    int rev = 0; NOOOO GOD NO! inside the loop, different for each i!

    for (int i = b; i >0; --i) {
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
            counter++;
        }

        if (counter==10){
            break;
        }
    }
    return 0;
}