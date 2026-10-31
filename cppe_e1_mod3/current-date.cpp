#include <iostream>
#include <ctime>

using namespace std;


struct Date {
    int year;
    int month;
    int day;
};

Date today(void);

int main(void) {

    Date date = today();
    cout << date.day << endl;
    cout << date.month << endl;
    cout << date.year << endl;

    return 0;
}

Date today(void) {

    time_t t = time(NULL);
    tm tl = *localtime(&t);
    return (Date){tl.tm_year + 1900, tl.tm_mon + 1, tl.tm_mday};
}