//
// Created by Stefan Andonov on 5.11.26.
//


#include<iostream>

using namespace std;

int main () {

//    int x = 5678;
//
//    int firstDigit = x/1000;
//    int sumOfLastThree = x/100%10 + x/10%10+ x%10;
//
//    cout << firstDigit << " " << sumOfLastThree;

    int a,b;
    cin >> a >> b;


    for (int i = a; i <= b; ++i) {
        int sumOfDigits = 0;
        int temp = i;
        while (temp>9){
            int c = temp%10;
            sumOfDigits+=c;
            temp/=10;
        }
        if (temp==sumOfDigits){
            cout << i << endl;
        }
    }

    return 0;
}