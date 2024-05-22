#include "Date3.h"
#include <string>
#include <algorithm>
#include <sstream>

Date::Date() : yyyymmdd("00010101") {}
Date::Date(int year, int month, int day) {
    if (year < 1 || year > 9999 || month < 1 || month > 12 || day < 1 || day > num_days(year, month)) {
        yyyymmdd = "00000000";
    }
    else {
        std::string f_year = std::to_string(year);
        std::string f_month = month >= 10 ? std::to_string(month) : '0' + std::to_string(month);
        std::string f_day = day >= 10 ? std::to_string(day) : '0' + std::to_string(day);
        yyyymmdd = f_year + f_month + f_day;
    }
}
Date::Date(const std::string& year_month_day) {
    std::istringstream word(year_month_day);
    char slash;
    int year;
    int month;
    int day;
    if (word >> year >> slash >> month >> slash >> day) {
        *this = Date(year, month, day);
        if (!is_valid() || std::count(year_month_day.begin(), year_month_day.end(), '/') != 2) {
            yyyymmdd = "00000000";
        }
    } else {
        yyyymmdd = "00000000";
    }
}

int Date::get_year() const {
    return std::stoi(yyyymmdd.substr(0, 4));
}

int Date::get_month() const {
    return std::stoi(yyyymmdd.substr(4, 2));
}

int Date::get_day() const {
    return std::stoi(yyyymmdd.substr(6, 2));
}
bool Date::is_valid() const {
    int year = get_year();
    int month = get_month();
    int day = get_day();
    return (!(year < 1 || year > 9999 || month < 1 || month > 12 || day < 1 || day > num_days(year, month)));
}

bool is_leap(int year) {return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);}

int Date::num_days(int year, int month) {
    switch(month) {
        case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12:
            return 31;
        case 4 : case 6 : case 9 : case 11:
            return 30;
        default:
            return is_leap(year) ? 29 : 28;
    }
}