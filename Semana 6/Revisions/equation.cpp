#include <iostream>
#include <cmath>

int solve_eq(int a, int b, int c, double& x1, double& x2) {
    double x = b * b - 4* a * c;
    if (x < 0) {
        x1 = x2 = NAN;
        x = 0;
    }
    else if (x == 0) {
        x1 = (-b) / (2.0 * a);
        x2 = NAN;
        x = 1;
    }
    else {
        x1 = (-b - std::sqrt(x)) / (2.0 * a);
        x2 = (-b + std::sqrt(x)) / (2.0 * a);
        x = 2;
    }
    return x;
}
