//
// Created by Stefan Andonov on 29.10.26.
//


#include<iostream>
using namespace std;

int main () {

    //Scenario B: Read N and N number
    /*
     * 5
     * 78
     * 89
     * 88
     * 92
     * 93
     * */

    int n;
    cin >> n;

    int c0=0,c1=0,c2=0;


    while (n>0){

        int number;
        cin >> number;

        switch (number % 3) {
            case 0:
                ++c0; break;
            case 1:
                ++c1; break;
            default :
                ++c2; break;
        }

        cout << c0 << " " << c1 << " " << c2 << endl;

        n--;
    }




//    int i=0;
//    while (i<n){
//
//        i++;
//    }

    return 0;
}