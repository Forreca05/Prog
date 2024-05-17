#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point {
public:
    Point(); // Default constructor
    Point(int x, int y);
    int x() const;
    int y() const;
    void show() const;

private:
    int x_;
    int y_;
};

#endif // POINT_H
