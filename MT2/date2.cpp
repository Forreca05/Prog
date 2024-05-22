#include "Date2.h"
#include <sstream>

Date::Date() : year(1), month(1), day(1) {}
Date::Date(int year, int month, int day) {
    if (!is_valid()) {this->year = 0; this->month = 0; this->day = 0;}   
    else {this->year = year; this->month = month; this->day = day;}}
Date::Date(const std::string& year_month_day) {
    char separator;
    std::istringstream ss(year_month_day);
    ss >> year >> separator >> month >> separator >> day;
    if (separator != '/' || !is_valid()) {year = 0; month = 0; day = 0;}
}
bool Date::is_valid() const {return (year >= 1 && year <= 9999 && month >= 1 && month <= 12  && day >= 1 && day <= num_days(year, month));}
bool is_leap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {return true;}
    return false;
}
int Date::num_days(int year, int month) {
    switch(month){
        case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12:
            return 31;
        case 4 : case 6 : case 9 : case 11: 
            return 30; 
        default:
            return is_leap(year) ? 29 : 28;
    }
}