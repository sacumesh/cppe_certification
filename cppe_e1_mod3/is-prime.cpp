#include <iostream>
#include <cmath>

using namespace std;


bool isPrime(unsigned n) {
    if (n < 2) {
        return false;
    }

    for (int i = 2; i * i <= n; i+=6)
        if (n % i == 0)
            return false;

    return true;
}

int main(void) {

    for(int i = 0; i <= 21; i++)
		if(isPrime(i))
			cout << i << " ";
	cout << endl;


    return 0;
}