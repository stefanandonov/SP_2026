//
// Created by Stefan Andonov on 15.10.26.
//

#include<iostream>

using namespace std;

int main() {

    float x, y;
    cin >> x >> y;

//    Solution A
//    if (x > 0 && y > 0) {
//        cout << "I";
//    } else if (x < 0 && y > 0) {
//        cout << "II";
//    } else if (x < 0 && y < 0) {
//        cout << "III";
//    } else if (x > 0 && y < 0) {
//        cout << "IV";
//    } else {
//        if (x == 0 && y == 0) {
//            cout << "center";
//        }
//        else if (x == 0) {
//            cout << "y axis";
//        } else if (y == 0) {
//            cout << "x axis";
//        }
//    }

    if (y > 0) {
        //I or II
        if (x > 0) {
            cout << "I" << endl;
        } else if (x < 0) {
            cout << "II" << endl;
        } else {
            //x==0 y>0
            cout << "y-axis";
        }
    } else if (y < 0) {
        if (x > 0) {
            cout << "IV" << endl;
        } else if (x < 0) {
            cout << "III" << endl;
        } else {
            cout << "y-axis";
        }
    } else {
        //y==0
        if (x == 0) {
            cout << "center";
        } else {
            cout << "x-axis";
        }
    }


    return 0;
}

