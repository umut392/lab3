#include <iostream>

using namespace std;
int main() {
    long sayi;
    cout << "enter a number bigger than 1 ";
    cin >> sayi;
    if (sayi <= 1) {
        cout << "enter a number bigger than 1 " << endl;
    } else {
        int aa = 0;
        while (sayi != 1) {
            cout << sayi << " -> ";
            if (sayi % 2 == 0) {
                sayi = sayi / 2;
            } else {
                sayi = (sayi * 3) + 1;
            }
            aa++;
        }


        cout << "1" << endl;
        cout << "total count " << aa << endl;
    }

    return 0;
}
