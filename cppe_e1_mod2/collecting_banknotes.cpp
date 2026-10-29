#include <iostream>

using namespace std;

int main(void) {

    int banknotes[] = {50, 20, 10, 5, 1};
    unsigned amount;

    cout << "Enter amount: ";
    cin >> amount;

    for (int i = 0; i < 5; ++i) {
        while (amount >= banknotes[i]) {
            amount = amount - banknotes[i];
            cout << banknotes[i] << " ";
        } 

        if (amount == 0)
            break;
    }

    cout << "\b" << endl;



    return 0;
}