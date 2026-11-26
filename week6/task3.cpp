//
// Created by Stefan Andonov on 26.11.26.
//


#include<iostream>

using namespace std;

bool isPrime(int number) {
    for (int i = 2; i < number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int digits (int number){

}

int evenDigits (int number){

}

int divisors (int number){
    int sum = 0;
    for (int i = 1; i <= number; ++i) {
        if (number % i == 0){
            sum+=i;
        }
    }
    return sum;
}

int main() {

    int i, x;
    cin >> x;

//    for (int i = x + 1; ; ++i) {
//        if (isPrime(i)) {
//            cout << i << " - " << x << " = " << i - x << endl;
//            break;
//        }
//    }

    for (i = x + 1; !isPrime(i) ; ++i);
    cout << i << " - " << x << " = " << i - x << endl;
    return 0;
}