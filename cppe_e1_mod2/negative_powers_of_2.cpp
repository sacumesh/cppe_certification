#include <iostream>

using namespace std;

int main(void) {

    double pow = 1;
    int n;

    cout << "n? ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        pow *= 0.5;
    }

    cout.precision(20);
    cout << pow << endl;


    return 0;
}