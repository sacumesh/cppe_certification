#include <iostream>

using namespace std;

int main(void) {

    unsigned long i = 1, j = 1;
    int n;

    cout << "n = ";
    cin >> n;


    for (int k = 0; k < n - 2; ++k) {
        unsigned long temp = j;
        j = i + j;
        i = temp;
    }

    cout << j << endl;


    return 0;
}