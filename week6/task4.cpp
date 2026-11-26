//
// Created by Stefan Andonov on 26.11.26.
//


#include<iostream>
using namespace std;

int divisors (int number){
    int sum = number;
    for (int i = 1; i <= ceil(number/2); ++i) {
        if (number % i == 0){
            sum+=i;
        }
    }
    return sum;
}

bool isPrime(int number) {
    for (int i = 2; i < ceil(number/2); ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}


int main () {

    int X;
    cin >> X;

    for (int i = X-1; i > 0; i--) {
        if (isPrime(divisors(i))){
            cout << i << "(" << divisors(i) << ")" << endl;
        }
    }
    return 0;
}