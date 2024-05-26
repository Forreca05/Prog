#include "Solid.h"

class Cylinder : public Solid {
public:
    Cylinder(const point& c, const double& radius, const double& height) : Solid(c), radius_(radius), height_(height) {};
    const double& radius() const {return radius_;}
    const double& height() const {return height_;}
    double area() const override {
        return 2 * M_PI * radius_ * (radius_ + height_);
    }
private:
    double radius_, height_;
};