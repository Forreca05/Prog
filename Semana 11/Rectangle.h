#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
#include <iostream>
#include <cmath>

class Rectangle : public Shape {
    public:
        Rectangle(const point &center, double width, double height) : Shape(center), width_(width), height_(height) {}
        virtual double area() const override {return height_ * width_;}
        virtual double perimeter() const override {return 2 * (height_ + width_);}
bool contains(const point& p) const override {
    double dx = std::abs(p.x - get_center().x);
    double dy = std::abs(p.y - get_center().y);
    return (dx <= width_ / 2) && (dy <= height_ / 2);
}

    private:
        double width_;
        double height_;
};

#endif

