//
// Created by Stefan Andonov on 29.10.26.
//


#include<iostream>
using namespace std;

int main () {

    int number;
    int sum = 0;
    cin >> number;
    int temp = number;

//    while (temp>0){
//        int lastDigit = temp%10;
//
//        //TODO do something with the digit
//        cout << lastDigit << endl;
//        sum += lastDigit;
//
//        temp/=10;
//    }

    for (int i = number; i > 0; i /= 10) {
        int lastDigit = i % 10;
        cout << lastDigit << endl;
        sum += lastDigit;
    }

    cout << "Sum of digits in the number " << number << " is: " << sum;
    return 0;
}