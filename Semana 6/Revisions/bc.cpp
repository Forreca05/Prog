#include <iostream>

unsigned long bc(unsigned long n, unsigned long k) {
    unsigned long total = 1;
    unsigned long x = 1;
    for (unsigned long i = 1; i <= n; i++) {
        total *= i;
    }
    for (unsigned long i = 1; i <= k; i++) {
        x *= i;
    }
    for (unsigned long i = 1; i <= n - k; i++) {
        x *= i;
    }
    return total / x;
}