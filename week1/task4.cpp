//
// Created by Stefan Andonov on 15.10.26.
//


#include<iostream>
#include<cmath>
using namespace std;

int main() {
    float a, b, c;

    cin >> a >> b >> c;

    float perimeter = a + b + c;

    float s = perimeter/2.0;

    float area = sqrt(s*(s-a)*(s-b)*(s-c));

    cout << "Perimeter is: " << perimeter << endl;
    cout << "Area is: " << area;

    return 0;
}