#include <iostream>

using namespace std;

int main(void) {

    int n;

    cout << "n = " << endl;
    cin >> n;


    int len = 1, val = 1;
    int x = 0, y = 0;
    
    while (x < n / 2 && y < n / 2) {

        // move up
        for (int i = 0; i < len; i++) {
            x -= 1;            
            val++;
        }

        // move left
        for (int i = 0; i < len; i++) {
            y += 1;
            val++;
        }

        len++;

        // move down
        for (int i = 0; i < len; i++) {
            x += 1;
            val++;
        }

        if (x == n / 2 && y == n / 2) {
            break;
        }

        // move right
        for (int i = 0; i < len; i++) {
            y -= 1;
            val++;
        }

        len++;

    }

    cout << val << endl;
    return 0;
}