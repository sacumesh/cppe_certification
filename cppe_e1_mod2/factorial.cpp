#include <iostream>

using namespace std;

int main(void) {

    int n;
    unsigned long fact;
    cout << "n = ";


    cin >> n;

    fact = 1;
    if (n == 0) {
        
        cout << fact << endl; 
    } else {

        for (int i = 1; i < n + 1; ++i) {
            fact *= i;
        }

        cout << fact << endl;
    }


    return 0;
}
