#include "Shape.h"
#include <cmath>

class Circle final : public Shape {
public:
    Circle(const point& center, const double& radius) : Shape(center), radius_(radius) {};
    const double& get_radius() const {return radius_;}
    double area() const override {return M_PI * radius_ * radius_;}
    double perimeter() const override {return 2 * M_PI * radius_;}
    bool contains(const point & p) const override {
        if ((pow(p.x- get_center().x, 2) + pow(p.y - get_center().y, 2)) <= pow(radius_,2)) {
            return true;
        }
        return false;
    }
private:
    double radius_;
};