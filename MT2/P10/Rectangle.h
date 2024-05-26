#include "Shape.h"

class Rectangle final : public Shape {
public:    
    Rectangle(const point& center, const double& width, const double& height) : Shape(center), width_(width), height_(height) {};
    const double& get_width() const {return width_;}
    const double& get_height() const {return height_;}
    double area() const override {return width_ * height_;}
    double perimeter() const override {return 2 * (height_ + width_);}
    bool contains(const point& p) const override {
        if (std::abs(p.x - get_center().x) <= width_/2.0 && std::abs(p.y - get_center().y) <= height_ / 2.0) {
            return true;
        }
        return false;
    }
private:
    double width_, height_;
};