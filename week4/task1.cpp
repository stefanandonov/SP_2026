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



    for (int i = 1000; i < 10000; ++i) {
        int firstDigit = i/1000;
        int sumOfLastThree = i/100%10 + i/10%10+ i%10;
        if (firstDigit == sumOfLastThree){
            cout << i << endl;
        }
    }

    return 0;
}