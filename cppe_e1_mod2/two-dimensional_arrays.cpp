#include <iostream>

using namespace std;

int main(void) {

	double matrix[][4] = { 	{ 1, 2, 3, 4 },
			    	{ 2, 2, 3, 1 },
			    	{ 3, 3, 3, 2 },
			    	{ 4, 1, 2, 4 }   };

	int side = sizeof(matrix[0]) / sizeof(matrix[0][0]);
	bool issymmetric = true;

	// Insert your code here

    for (int row = 0; row < side; ++row) {
        for (int col = row + 1; col < side; ++col) {
            if (matrix[row][col] != matrix[col][row]) {
                issymmetric = false;
                break;
            }
        }

        if (issymmetric == false)
            break;
    }

	if(issymmetric)
		cout << "The matrix is symmetric" << endl;
	else
		cout << "The matrix is not symmetric" << endl;
	return 0;
}