//
// Created by ML103 on 3/5/2026.
//

#include "lab3soru2.h"
#include <iostream>

using namespace std;
int main() {

    int n;


    while (true) {
        cout << "please enter a number between 10 to 100 ";
        if (!(cin >> n)) {
            cin.clear();
            continue;
        }
        if (n >= 10 && n <= 100) {
            break;
        }
        cout << "please enter a number between 10 to 100" << endl;
    }

    int Fizz = 0;
    int Buzz = 0;
    int FizzBuzz = 0;
    for (int i = 1; i <= n; ++i) {
        if (i % 7 == 0) {
            cout << i << " is skipped" << endl;
            continue;
        }
        if (i%3==0&& i%5==0) {
            cout << "FizzBuzz" << endl;
            FizzBuzz++;
        }
        else if (i % 3 == 0) {
            cout << "Fizz" << endl;
            Fizz++;
        }
        else if (i % 5 == 0) {
            cout << "Buzz" << endl;
            Buzz++;
        }
        else {
            cout << i << endl;
        }
    }


    cout << "---------------------" << endl;
    cout << "summary" << endl;
    cout << "total Fizz: " << Fizz << endl;
    cout << "total Buzz: " << Buzz << endl;
    cout << "total FizzBuzz: " << FizzBuzz << endl;

    return 0;
}
