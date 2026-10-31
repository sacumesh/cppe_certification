#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int randBall(int max);
bool isIn(int ball, int balls[], int size);

int main(void) {

    int maxball;
    int ballsno;

    cout << "max ball number ? ";
    cin >> maxball;
    cout << "how many balls ?";
    cin >> ballsno;


    srand(time(NULL));
    int *balls = new int[ballsno];
    
    for (int i = 0; i < ballsno; i++) {
        int bl = randBall(maxball);

        while (isIn(bl, balls, ballsno))
            bl = randBall(maxball);

        balls[i] = bl;
    }

    for(int b = 0; b < ballsno; b++)
		cout << balls[b] << " ";
	cout << endl;

	delete[] balls;

    return 0;
}

int randBall(int max) {
    return rand() % max + 1;
}

bool isIn(int ball, int balls[], int size){

    for (int i = 0; i < size; ++i) {
        if (balls[i] == ball) 
            return true;
    }

    return false;
 }