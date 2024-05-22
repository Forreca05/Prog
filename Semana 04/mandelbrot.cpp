#ifndef __complex_h__
#define __complex_h__

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Representation of a complex number z = x + y i
struct complex {
    double x; // Real part
    double y; // Imaginary part
};

void add(const complex& a, const complex& b, complex& r) {
    r.x = a.x + b.x;
    r.y = a.y + b.y;
}

void mul(const complex& a, const complex& b, complex& r) {
    r.x = a.x * b.x - a.y * b.y;
    r.y = a.x * b.y + a.y * b.x;
}

double norm(const complex& c) {
    return sqrt(c.x * c.x + c.y * c.y);
}

void mandelbrot(const complex& c, unsigned int n, complex& z_n) {
    if (n == 0) {
        z_n = {0, 0};
        return;
    }
    complex z_temp = {0, 0};
    for (unsigned int i = 1; i <= n; i++) {
        mul(z_temp, z_temp, z_n);
        add(z_n, c, z_n);
        z_temp = z_n;
    }
}

ostream& operator<<(ostream& out, const complex& c) {
    return out << fixed << setprecision(3)
               << c.x
               << (c.y >= 0.0 ? "+" : "")
               << c.y << "i";
}

#endif // __complex_h__

