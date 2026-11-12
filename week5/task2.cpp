//
// Created by Stefan Andonov on 12.11.26.
//

#include<iostream>

using namespace std;

int combine(int a, int b, int k) {
    int comb = 0;
    int mult = 1;

    while (a || b || k) {
        int cA = a % 10;
        int cB = b % 10;
        int cK = k % 10;

//            int diff = cA-cB;
//            if (diff<0){
//                diff*=-1;
//            }

        int diff = abs(cA - cB);

        if (diff > cK) {
            comb = cB * mult + comb;
            mult *= 10;
        } else if (diff < cK) {
            comb = cA * mult + comb;
            mult *= 10;
        }

        a /= 10;
        b /= 10;
        k /= 10;

    }

    return comb;
}

int main() {

    int a, b, k;

    while (cin >> a >> b >> k) {
        cout << combine(a, b, k) << endl;
    }
    return 0;
}