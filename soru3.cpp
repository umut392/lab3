

#include "lab3soru3.h"
#include <iostream>

using namespace std;
int main() {
    
    int n;
    cout << "enter a number between 3 and 9";
    cin >> n;
    if (n >= 3 && n <= 9) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }
        for (int i = n - 1; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    } else {
        cout << "enter a number between 3 and 9" << endl;
    }


}
