#include <iostream>

using namespace std;

bool isLeap(int year);
int monthLength(int year, int month);
void test_the_function(int year, int month);

int main(void) {

    for(int yr = 2000; yr < 2002; yr++) {
        for(int mo = 1; mo <= 12; mo++)
			test_the_function(yr, mo);
		cout << endl;
	}

    return 0;
}


bool isLeap(int year) {

    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int monthLength(int year, int month) {

    int n_days_of_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (month < 1 || month > 12 || year < 0)
        return 0;
    
    int n_days = n_days_of_month[month - 1];

    if (month == 2 && isLeap(year))
        n_days += 1;

    return n_days;
    
}

void test_the_function(int year, int month) {
    cout << monthLength(year,month) << " ";
}