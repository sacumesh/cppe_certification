#include <iostream>

using namespace std;

int main(void) {

	unsigned n_fractions;
    double pi = 0.0;

    cout << "Enter a number of totaled fractions: ";
    cin >> n_fractions;

    double sign = 1.0;
    for (unsigned i = 0; i < n_fractions; ++i) {
        pi += sign / (2.0 * i + 1.0);
        sign = -sign;
    }
    pi *= 4.0;

    cout.precision(20);
    cout << "Pi = " << pi << endl;

	return 0;
}