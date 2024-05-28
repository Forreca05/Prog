#include "Date.h"
#include <algorithm>
#include <vector>
#include <iostream>
#include <iomanip>

bool operator<(const Date& a, const Date& b) {
    if (a.getYear() < b.getYear()) return true;
    else if (a.getYear() == b.getYear()) {
        if (a.getMonth() < b.getMonth()) return true;
        else if (a.getMonth() == b.getMonth()) {
            if (a.getDay() < b.getDay()) return true;
            else return false;
        }
        else return false;
    }
    else return false;
}

std::ostream &operator<<(std::ostream& os, const Date& a) {
    os << std::setw(4) <<std::setfill('0') << a.getYear() << '/'
    << std::setw(2) << std::setfill('0') << a.getMonth() << '/'
    << std::setw(2) << std::setfill('0') << a.getDay();
    return os;
}