#include <iostream>

using namespace std;

int main(void) {

    unsigned long pow = 1;
    int n;

    cout << "Enter non negative integer < 64: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        pow *= 2;
    }

    cout << pow << endl;

    return 0;
}