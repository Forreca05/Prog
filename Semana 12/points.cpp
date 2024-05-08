#include <iostream>

class Point {
public:
    Point() : x_(0), y_(0) {}
    Point(int x, int y) : x_(x), y_(y) {}
    Point(const Point& p) : x_(p.x_), y_(p.y_) {}
    
    int get_x() const { return x_; }
    int get_y() const { return y_; }
    
    Point& operator=(const Point& p) {
        if (this != &p) {
            x_ = p.x_;
            y_ = p.y_;
        }
        return *this;
    }
    
    Point operator+(const Point& p) const {
        return Point(x_ + p.x_, y_ + p.y_);
    }
    
    Point& operator+=(const Point& p) {
        x_ += p.x_;
        y_ += p.y_;
        return *this;
    }
    
    Point operator*(int v) const {
        return Point(x_ * v, y_ * v);
    }

private:
    int x_, y_;
};

Point operator*(int x, const Point& p) {
    return Point(x * p.get_x(), x * p.get_y());
}

std::ostream& operator<<(std::ostream& os, const Point& p) {
    os << "(" << p.get_x() << "," << p.get_y() << ")";
    return os;
}