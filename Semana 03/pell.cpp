#include <iostream>
#include <cmath>
using namespace std;

unsigned long pell(unsigned long n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }

    unsigned long p0 = 0;
    unsigned long p1 = 1;
    unsigned long p = 0;

    for (unsigned long i = 2; i <= n; i++) {
        p = 2 * p1 + p0;
        p0 = p1;
        p1 = p;
    }

    return p;
}