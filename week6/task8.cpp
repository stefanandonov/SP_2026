//
// Created by Stefan Andonov on 26.11.26.
//


#include<iostream>
using namespace std;

int main () {

    int n;
    cin >> n;

    int array [100];
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    //1. put last element in temp variable
    int temp = array[n-1];

    //2. push all elements to the right, backwards
    for (int i = n-1; i >0 ; --i) {
        array[i]=array[i-1];
    }

    //3. put the last element (temp) in the beginning
    array[0]=temp;

    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }
    return 0;
}