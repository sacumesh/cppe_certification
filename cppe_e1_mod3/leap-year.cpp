#include <iostream>

using namespace std;

bool isLeap(int year);
void test_the_function(int year);

int main(void) {

    int start_year = 1995;
    int end_year = 2016;

    while (start_year <= end_year)
        test_the_function(start_year++);

    return 0;
}

void test_the_function(int year) {
    cout << year << " -> " << isLeap(year) << endl;  
}

bool isLeap(int year) {

    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}