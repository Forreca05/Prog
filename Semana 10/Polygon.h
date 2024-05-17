#ifndef POLYGON_H
#define POLYGON_H

#include <vector>
#include "Point.h"

class Polygon {
public:
    Polygon();
    Polygon(const std::vector<Point>& vertices);
    void add_vertex(int position, const Point& vertex);
    bool get_vertex(int position, Point& vertex) const;
    void show() const;
    double perimeter() const;

private:
    std::vector<Point> vertices_;
};

#endif // POLYGON_H
