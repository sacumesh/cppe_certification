#include <iostream>
using namespace std;


int main() {

    int c0;
    int steps = 0;

    cout << "Enter a positive integer: ";
    cin >> c0;

    do {
        if (c0 == 1)
            continue;

        if (c0 % 2)
            c0 = 3 * c0 + 1;
        else
            c0 /= 2;

        cout << c0 << endl;
        ++steps;

    } while (c0 != 1);

    if (steps)
        cout << "steps = " << steps << endl;
    else {
        cout << "invalid input: " << c0 << endl;
        return 1;
    }
        

    return 0;
}