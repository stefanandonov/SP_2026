//
// Created by Stefan Andonov on 5.11.26.
//


#include<iostream>

using namespace std;

bool isGoodBoy (int number){

}

int main () {


    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        int number;
        cin >> number;

        bool goodNumber = true;

        int x = number;
        while (x>9){
            int c1 = x%10;
            int c2 = x/10%10;
            if (c2<=c1){
                goodNumber = false;
                break;
            }
            x/=10;
        }

        if (goodNumber){
            cout << number << endl;
        }

    }


    return 0;
}