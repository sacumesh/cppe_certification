#include <iostream>
#include <cmath>

using namespace std; 

int main(void) {

    double vector[] = { 1., 2., 3., 4., 5. };
	int n = sizeof(vector) / sizeof(vector[0]);
	double ArithmeticMean;
	double HarmonicMean;
	double GeometricMean;
	double RootMeanSquare;

    double sum  = 0;
    double sum_rev = 0;
    double prod = 1;
    double sumsq = 0;


    for (int i = 0; i < n; ++i) {
        sum += vector[i];
        sum_rev += 1 / vector[i];
        prod *= vector[i];
        sumsq += vector[i] * vector[i];
    }

    ArithmeticMean = sum / n;
    HarmonicMean = n / sum_rev;
    GeometricMean = pow(prod, 1.0f / n);
    RootMeanSquare = sqrt(sumsq / n);

    cout << "Arithmetic Mean = " << ArithmeticMean << endl;
	cout << "Harmonic Mean   = " << HarmonicMean   << endl;
	cout << "Geometric Mean  = " << GeometricMean  << endl;
	cout << "RootMean Square = " << RootMeanSquare << endl;

	cout << endl;


    return 0;
}