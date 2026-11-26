//
// Created by Stefan Andonov on 26.11.26.
//


#include<iostream>
using namespace std;

int main () {

    int n1;
    cin >> n1;

    int array1 [100];
    for (int i = 0; i < n1; ++i) {
        cin >> array1[i];
    }

    int n2;
    cin >> n2;

    int array2 [100];
    for (int i = 0; i < n2; ++i) {
        cin >> array2[i];
    }

    if (n1!=n2){
        cout << "NOT EQUAL" << endl;
        return 0;
    }


    for (int i = 0; i < n1; ++i) {
        if (array1[i]!=array2[i]){
            cout << "NOT EQUAL" << endl;
            return 0;
        }
    }


    cout << "EQUAL" << endl;

    return 0;
}