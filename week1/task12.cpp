//
// Created by Stefan Andonov on 15.10.26.
//


#include<iostream>
using namespace std;

int main () {

    int date;

    cin >> date;

    int year = date % 10000;
    int dayAndMonth = date / 10000;

    int month = dayAndMonth % 100;
    int day = dayAndMonth / 100;

    cout << day << "." << month << "." << year;

    return 0;
}