#include <iostream>

using namespace std;

int main(void) {

    unsigned N = 3, h;
    cout << "Pyramid height = ";
    cin >> h;

    int spa = 15;
    int beg = 1;
    int ins = 1;

    for(int i = 0; i < N; ++i) {
        for (int j = 0; j < spa; ++j) {
            cout << " ";
        }
        
        cout << "*";
    }
    cout << endl;

    spa -= 2;
    for (int i = 0; i < h - 2; ++i) {
        for (int j = 0; j < beg; ++j) {
            cout << " ";
        }

        for (int j = 0; j < N; ++j) {
            for (int k = 0; k < spa; ++k) {
                cout << " ";
            }

            cout << "*";

            for (int k = 0; k < ins; ++k) {
                cout << " ";
            }

            cout << "*";
        }

       
        spa -= 2;
        ins += 2;
        beg++;
        cout << endl;

    }

    for (int j = 0; j < beg; ++j) {
            cout << " ";
        }
    for (int j = 0; j < N; ++j) {
        for (int k = 0; k < spa; ++k) {
            cout << " ";
        }
        for (int k = 0; k < ins + 2; ++k) {
            cout << "*";
        }
    }
        
        cout << endl;

    return 0;
}