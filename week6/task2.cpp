//
// Created by Stefan Andonov on 26.11.26.
//


#include<iostream>

using namespace std;

int digitOnPosition (int number, int position){
    int counter = 1;
    while(number){
        int digit = number%10;

        if (counter==position){
            return digit;
        }
        number/=10;
        ++counter;
    }

    return -1;
}

int digitsCount (int number, int digit){
    int counter = 0;
    while (number){
        int lastDigit = number%10;

        if (lastDigit==digit){
            ++counter;
        }
        number/=10;
    }
    return counter;
}

int main() {

    int X, K, P;

    cin >> X >> K >> P;

    int counter=0;

    for (int i = X - 1; i > 0; --i) {
        if (digitsCount(i, K)==P){
            cout << i << endl;
            ++counter;
        }
        if (counter==10){
            break;
        }
    }

    if (counter==0){
        cout << "No numbers";
    }

    return 0;
}