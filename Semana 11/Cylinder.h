#ifndef Cylinder_
#define Cylinder_

#include "Solid.h"
#include <cmath>

class Cylinder : public Solid {
public:
    Cylinder(const point& c, double radius, double height) : Solid(c), height_(height), radius_(radius) {}
    double height() const { return height_; }
    double radius() const { return radius_; }
    virtual double area() const override { return 2 * M_PI * radius_ * (radius_ + height_); }
private:
    double height_;
    double radius_;
};

#endif // Cylinder_
