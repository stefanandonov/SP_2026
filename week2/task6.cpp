//
// Created by Stefan Andonov on 15.10.26.
//

#include<iostream>

using namespace std;

int main() {

    int start, end;

    cin >> start >> end;

    int hourStart, hourEnd, minuteStart, minuteEnd;

    minuteStart = start % 100;
    minuteEnd = end % 100;

    hourStart = start / 100;
    hourEnd = end / 100;

    if (hourStart >= 0 && hourStart <= 23 && minuteStart >= 0 && minuteStart <= 59 && hourEnd >= 0 && hourEnd <= 23 &&
        minuteEnd >= 0 && minuteEnd <= 59) {

        if (hourEnd<hourStart){
            hourEnd+=24;
        }

        int startElapsed = hourStart * 60 + minuteStart;
        int endElapsed = hourEnd * 60 + minuteEnd;

        int diff = endElapsed - startElapsed;

        int hourInParking = diff / 60;
        int minuteInParking = diff % 60;

        cout << "Parked: "<<hourInParking <<" h " << minuteInParking<< " min" <<endl;

        if (diff<=15){
            cout << "To pay: 0 den" << endl;
        } else {
            int amount = hourInParking * 50;
            if (minuteInParking>0){
                amount+=50;
            }

            if (amount>400){
                amount=400;
            }

            cout << "To pay: "<< amount<<" den"<<endl;
        }

    } else {
        cout << "Invalid time";
    }




    return 0;
}

