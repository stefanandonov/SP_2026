//
// Created by Stefan Andonov on 12.11.26.
//

#include<iostream>

using namespace std;

bool cikcak(int number) {
    int c1 = number % 10;
    int c2 = number / 10 % 10;

    char op;

    if (c2>c1){
        op = '<';
    } else if (c2<c1){
        op = '>';
    } else { //c2==c1
        return false;
    }

    number/=10;

    while (number>=10){
        c1 = number%10;
        c2 = number/10%10;

        if (op=='>'){
            if (c2<=c1){
                return false;
            } else {
                op='<';
            }
        } else if(op=='<'){
            if (c2>=c1){
                return false;
            } else {
                op = '>';
            }
        }

        number/=10;
    }

    return true;
}

int main() {

    int number;

    while (cin >> number) {

        if (number<10){
            continue;
        }

        if (cikcak(number)) {
            cout << number << endl;
        }
    }
    return 0;
}