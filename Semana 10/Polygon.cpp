#include "Polygon.h"
#include <cmath>

Polygon::Polygon() {}

Polygon::Polygon(const std::vector<Point>& vertices) : vertices_(vertices) {}

void Polygon::add_vertex(int position, const Point& vertex) {
    if (position < 1 || position > static_cast<int>(vertices_.size()) + 1) {
        std::cerr << "Invalid position for adding vertex\n";
        return;
    }
    vertices_.insert(vertices_.begin() + position - 1, vertex);
}

bool Polygon::get_vertex(int position, Point& vertex) const {
    if (position < 1 || position > static_cast<int>(vertices_.size())) {
        return false;
    }
    vertex = vertices_[position - 1];
    return true;
}

void Polygon::show() const {
    std::cout << "{";
    for (const auto& vertex : vertices_) {
        vertex.show();
    }
    std::cout << "}";
}

double Polygon::perimeter() const {
    double perimeter = 0.0;
    for (size_t i = 0; i < vertices_.size(); ++i) {
        const Point& current_point = vertices_[i];
        const Point& next_point = vertices_[(i + 1) % vertices_.size()]; // Wrap around for last point
        double side_length = sqrt(pow(next_point.x() - current_point.x(), 2) + pow(next_point.y() - current_point.y(), 2));
        perimeter += side_length;
    }
    return perimeter;
}