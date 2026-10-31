#include <iostream>
#include <cmath>

using namespace std;


void increment(float &var, float inc = 1.0);
void increment(int &var, int inc = 1);

int main(void) {
    
    int intvar = 0;
	float floatvar = 1.5;

	for(int i = 0; i < 10; i++)
		if(i % 2) {
			increment(intvar);
			increment(floatvar, sqrt(intvar));
		}
		else {
			increment(intvar,i);
			increment(floatvar);
		}
	cout << intvar * floatvar << endl;


    return 0;
}


void increment(int &var, int inc) {
    var += inc;
}



void increment(float &var, float inc) {
    var += inc;
}