#include "Figure.h"

class FRectangle final : public Figure {
public:    
    FRectangle(double x_center, double y_center, const double& width, const double& height) : Figure(x_center, y_center), width_(width), height_(height) {};
    void draw() const override {
        std::cout << "R" << "(" << x_center_ << "," << y_center_ << ")" << "(" << width_ << "," << height_ << ")";
    }
private:
    double width_, height_;
};