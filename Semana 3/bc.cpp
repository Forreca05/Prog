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

/*#include <iostream>
using namespace std;

unsigned long fatorial(unsigned long n) {
    unsigned long result = 1;
    for (unsigned long i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

unsigned long bc(unsigned long n, unsigned long k) {
    return fatorial(n) / (fatorial(k) * fatorial(n - k));
}*/