//
// Created by Stefan Andonov on 15.10.26.
//

#include<iostream>

using namespace std;

int main() {

//    int number;
//
//    cin >> number;
//
//    switch (number) {
//        case 1: cout << 1 << " "; break;
//        case 2: cout << 2 << " ";
//        case 3: cout << 3 << " "; break;
//        default: cout << "Greshka";
//
//    }

    char c;
    cin >> c;

    if ((c>='a' && c<='z') || (c>='A' && c<='Z')) {
        char temp = c;
        if (c>='A' && c<='Z') {
            temp = c + 'a' - 'A';
        }

        cout << temp;

        switch (temp) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                cout << "vowel";
                break;
            default:
                cout << "consonant";
                break;
        }
    } else {
        cout << "Not a letter";
    }





    return 0;
}

