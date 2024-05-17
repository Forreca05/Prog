#include <iostream>
#include <cmath>
using namespace std;

int solve_eq(int a, int b, int c, double& x1, double& x2) {
    double t = b * b - 4 * a * c;
    int s = 0;
    if (t < 0) {
        x1 = x2 = NAN;
    }
    else if (t == 0) {
        x1 = -b / (2.0 * a);
        x2 = NAN;
        s = 1;
    }
    else {
        x1 = (-b - sqrt(t)) / (2.0 * a);
        x2 = (-b + sqrt(t)) / (2.0 * a);
        s = 2;
    }
    return s;
}


