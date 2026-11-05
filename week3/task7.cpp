
//
// Created by Stefan Andonov on 29.10.26.
//


#include<iostream>

using namespace std;

int main() {
    int a,b;

    cin >> a >> b;

    if (a<=0 || b<=0){
        cout << "Invalid input";
        return 0;
    }

    if (b>a){
//        int tmp = a;
//        a = b;
//        b = tmp;
        swap(a,b);
    }

    bool paren = true;

    while (b){
        int bDigit = b%10;
        int aDigit = a/10%10;

        if (aDigit!=bDigit){
            paren = false;
            break;
        }


        b/=10;
        a/=100;
    }

    if (paren){
        cout << "PAREN";
    } else {
        cout << "NE";
    }
}