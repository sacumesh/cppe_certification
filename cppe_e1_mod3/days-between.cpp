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
int daysBetween(Date since, Date till);
int daysBetweenAux(Date since, Date till);
int yearLength(int year);
void printDate(Date date);
bool isLater(Date d1, Date d2);
void test_the_function(Date since, Date till);

int main(void) {

    Date dates[][2] = {
        {{1901, 1, 1}, {2016, 1, 1}},
        {{2001, 12, 30}, {2016, 12, 31}},
        {{1999, 1, 31},{1999, 12, 1}},
        {{1999, 1, 2}, {1999, 1, 11}},
        {{1999, 2, 2}, {1999, 1, 11}}

    };

    int n = sizeof(dates) / sizeof(dates[0]);

    for (int i = 0; i < n; i++){
        test_the_function(dates[i][0], dates[i][1]);
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

int yearLength(int year) {
    return isLeap(year) ? 366 : 365;
}

int dayOfYear(Date date) {

    int days = 0;

    for (int i = 0; i < date.month - 1; i++) {
        days += monthLength(date.year, i + 1);
    }

    days += date.day;

    return days;
}

int daysBetween(Date since, Date till) {

    if (isLater(since, till))
        return -1;

    if (since.year == till.year)
        return dayOfYear(till) - dayOfYear(since);

    int diff = yearLength(since.year) - dayOfYear(since);
    for (int year = since.year + 1; year < till.year; year++)
                diff += yearLength(year);
    diff += dayOfYear(till);

    return diff;
}

bool isLater(Date d1, Date d2) {
    if (d1.year != d2.year)
        return d1.year > d2.year;
    else if (d1.month != d2.month)
        return d1.month > d2.month;
    
    return d1.day > d2.day;
}

void printDate(Date date) {
    cout << date.day << "-" << date.month << "-" << date.year;
}

void test_the_function(Date since, Date till) {
    printDate(since);
    cout << " - ";   
    printDate(till);
    cout << " -> " << daysBetween(since, till) << endl;
}