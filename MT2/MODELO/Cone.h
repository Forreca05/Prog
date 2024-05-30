#include "Solid3D.h"
#include <cmath>

class Cone : public Solid3D {
public:
    Cone(const point& c, double radius, double height) : Solid3D(c), radius_(radius), height_(height) {}
    const double& radius() const {return radius_;}
    const double& height() const {return height_;}
    double volume() const override {
        return (M_PI * pow(radius_,2) * height_) / 3;
    }
private:
    double radius_, height_;
};