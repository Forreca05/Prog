#include "Date.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

std::ostream& operator<<(std::ostream& os, const Date& date) {
    os << std::setfill('0') << std::setw(4) << date.getYear() << "/"
       << std::setw(2) << date.getMonth() << "/"
       << std::setw(2) << date.getDay();
    return os;
}

bool operator<(const Date& lhs, const Date& rhs) {
    if (lhs.getYear() != rhs.getYear()) {
        return lhs.getYear() < rhs.getYear();
    }
    if (lhs.getMonth() != rhs.getMonth()) {
        return lhs.getMonth() < rhs.getMonth();
    }
    return lhs.getDay() < rhs.getDay();
}