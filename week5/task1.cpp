//
// Created by Stefan Andonov on 12.11.26.
//

#include<iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int previous = 0;

    for (int i = 0; i < n; ++i) {
        int number;
        cin >> number;

        switch (number % 3) {
            case 0:
                cout << number / 3 << endl;
                break;

            case 1:
                cout << number + previous << endl;
                break;

            default: //case 2
                cout << number * 2;
        }

        previous = number;
    }
    return 0;
}