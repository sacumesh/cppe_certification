#include <iostream>

using namespace std;

int main(void) {

    unsigned n;

    cout << "square size = ";
    cin >> n;

    // top
    cout << "+";
    for (int i = 0; i < n - 2; ++i)
        cout << "-";
    cout << "+" << endl;

    // middle
    for (int i = 0; i < n - 2; ++i) {
        cout << "|";

        for (int k = 0; k < n - 2; ++k) {
            cout << " ";
        } 

        cout << "|" << endl;
    }

    // bottom 
    cout << "+";
    for (int i = 0; i < n - 2; ++i)
        cout << "-";
    cout << "+" << endl;


    return 0;
}