#include <iostream>
using namespace std;

unsigned long bc(unsigned long n, unsigned long k) {
    unsigned long l = 1;
    unsigned long j = 1;
    unsigned long m = 1;
    for (unsigned long i = 1; i <= n; i++) {
        l *= i;
    }
    for (unsigned long i = 1; i <= k; i++) {
        j *= i;
    }
    for (unsigned long i = 1; i <= n-k; i++) {
        m *= i;
    }
    return l / (m * j);
}

unsigned long bell(unsigned long n) {
    unsigned long result = 0;
    if (n == 0 or n == 1) {
        return 1; // Add a semicolon here
    }
    else {
        for (unsigned long i = 0; i < n; i++) {
        result += bc(n - 1, i) * bell(i);
        }
    }
    return result;
}

