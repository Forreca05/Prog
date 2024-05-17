#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#include <cmath>

class Circle : public Shape {
    public:
        Circle(const point& center, double radius) : Shape(center), radius_(radius) {}
        virtual double area() const override {return M_PI * radius_ * radius_;}
        virtual double perimeter() const override {return M_PI * 2.0 * radius_;}
        virtual bool contains(const point& p) const override {
            if ((pow(p.x - get_center().x, 2) + pow(p.y - get_center().y, 2)) <= pow(radius_, 2)) {
                return true;
            }
            return false;
        }
    private:
        double radius_;
};

#endif