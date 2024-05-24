#include "Point.h"
#include "Polygon.h"
#include <cmath>
#include <iostream>

Polygon::Polygon() : vertices_({}) {}
Polygon::Polygon(const std::vector<Point>& vertices) : vertices_(vertices) {}
void Polygon::add_vertex(int position, const Point& vertex) {
    vertices_.insert(vertices_.begin() + position  - 1, vertex);
}
bool Polygon::get_vertex(int position, Point& vertex) const {
    if (position < 1) return false;
    else {
        vertex = vertices_[position - 1];
        return true;
    }
}
void Polygon::show() const {
    std::cout << '{';
    for (auto& vertex : vertices_) {
        vertex.show();
    }
    std::cout << '}';
}
double Polygon::perimeter() const {
    double p = 0.0;
    for (size_t i = 1; i < vertices_.size(); i++) {
        p += (sqrt(pow(vertices_[i].x() - vertices_[i - 1].x(), 2) + pow(vertices_[i].y() - vertices_[i - 1].y(), 2))); 
    }
    p += (sqrt(pow(vertices_[0].x() - vertices_[vertices_.size() - 1].x(), 2) + pow(vertices_[0].y() - vertices_[vertices_.size() - 1].y(), 2)));
    return p; 
}