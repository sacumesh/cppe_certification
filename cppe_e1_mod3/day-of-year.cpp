#include <iostream>

using namespace std;

struct Date {
    int year;
    int month;
    int day;
};

bool isLeap(int year);
int monthLength(int year, int month);
int dayOfYear(Date date);
void test_the_function(Date date);

int main(void) {

    Date dates[] = {
        {2016, 3, 1},
        {2015, 3, 1},
        {2016, 12, 30},
        {2015, 12, 31}
    };

    int n = sizeof(dates) / sizeof(dates[0]);

    for (int i = 0; i < n; i++){
        test_the_function(dates[i]);
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

int dayOfYear(Date date) {

    int days = 0;

    for (int i = 0; i < date.month - 1; i++) {
        days += monthLength(date.year, i + 1);
    }

    days += date.day;

    return days;
}

void test_the_function(Date date) {
    cout << date.day << "-" << date.month << "-" << date.year << " ";
    cout << "-> " << dayOfYear(date) << endl;
}