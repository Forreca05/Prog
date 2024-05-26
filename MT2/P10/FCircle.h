#include "Figure.h"

class FCircle final : public Figure {
public:
    FCircle(double x_center, double y_center, const double& radius) : Figure(x_center, y_center), radius_(radius) {};
    void draw() const override {
        std::cout << 'C' << "(" << x_center_ << "," << y_center_ << ")" << "(" << radius_ << ")";
    }
private:
    double radius_;
};