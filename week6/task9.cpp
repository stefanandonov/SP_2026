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

    int k;
    cin >> k;

    //1. put last K elements in temp array
    int temp [100];
    for (int i = n-k; i < n; ++i) {
        temp[i-(n-k)] = array[i];
    }

    //2. push all elements to the right, backwards
    for (int i = 0; i < ; ++i) {
        
    }
    
    //3. put the last element (temp) in the beginning


    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }
    return 0;
}