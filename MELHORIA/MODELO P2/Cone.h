#include "Solid3D.h"

class Cone final : public Solid3D {
public:
    Cone(const point& c, double radius, double height) : Solid3D(c), radius_(radius), height_(height) {}
    double radius() const {return radius_;}
    double height() const {return height_;}
    double volume() const override {return M_PI * pow(radius_, 2) * height_ / 3;}
private:
    double radius_;
    double height_;
};