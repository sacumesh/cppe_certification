#include <iostream>

using namespace std;

int main(void) {

    int vector[] = {1, 7, 3, 8, 3, 7, 1};
    bool ispalindrome;
    int n = sizeof(vector) / sizeof(vector[0]);

    ispalindrome = true;
    for (int i = 0; i < n / 2; ++i)
        if (vector[i] != vector[n - 1 - i]){
            ispalindrome = false;
            break;
        }

    if (ispalindrome)
        cout << "it's a palindrome";
    else
        cout << "it's not a palindrome";

    cout << endl;

    return 0;
}