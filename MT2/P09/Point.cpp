#include "Point.h"
#include <iostream>

Point::Point() : x_(0), y_(0) {}
Point::Point(int x, int y) : x_(x), y_(y) {}
int Point::x() const {return x_;}
int Point::y() const {return y_;}
void Point::show() const {
    std::cout << '(' << x_ << ',' << y_ << ')';
}