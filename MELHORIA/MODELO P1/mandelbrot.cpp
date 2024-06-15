#include "complex.h"
#include <iostream>

complex sum(complex a, complex b) {
    complex c;
    c.real = a.real + b.real;
    c.img = a.img + b.img;
    return c;
}

complex mul(complex a, complex b) {
    complex c;
    c.real = a.real * b.real - a.img * b.img;
    c.img = a.real * b.img + b.real * a.img;
    return c;
}

void mandel(complex c, int n, complex z[]) {
    z[0].real = 0;
    z[0].img = 0;
    for (int i = 1; i < n; i++) {
        z[i] = sum(mul(z[i-1], z[i-1]),c);
    }
}
