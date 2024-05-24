#include "Date.h"

Date::Date() : year_(1), month_(1), day_(1) {}
Date::Date(int year, int month, int day) : year_(year), month_(month), day_(day) {}
bool Date::is_before(const Date& date) const {
    if (year_ < date.year_) return true;
    if (year_ > date.year_) return false;
    // Years are equal
    if (month_ < date.month_) return true;
    if (month_ > date.month_) return false;
    // Months are equal
    if (day_ < date.day_) return true;
    return false; // Days are equal or this day is after the compared day
}
