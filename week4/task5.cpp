//
// Created by Stefan Andonov on 5.11.26.
//


#include<iostream>

using namespace std;

int main () {

    int number;

    int max = 0;

    bool first = true;

    while (cin>>number){
//        if (first){
//            max = number;
//            first = false;
//        }
//
//        if (number>max){
//            max = number;
//        }

        if (number>100){
            continue;
        }


        if (first || number>max){
            max = number;
            if (first){
                first = false;
            }
        }
    }

    cout << max;


    return 0;
}