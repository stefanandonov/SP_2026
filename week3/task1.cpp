//
// Created by Stefan Andonov on 29.10.26.
//


#include<iostream>
using namespace std;

int main () {

//    for (int i = 1000; i < 10000; ++i) {
//        if (i % 15 == 0){
//            cout << i << endl;
//        }
//
//    }

    //Scenario A: Check all the numbers in interval [A,B]

    int sum = 0, counter = 0;
    for (int i = 999; i >= 100; i--) {

        if (i % 15 == 0) {
            cout << i << endl;
            sum += i;
            counter++;
        }

    }

    cout << sum << endl;
    cout << 1.0 * sum / counter;

    return 0;
}