#include <iostream>
using namespace std;

unsigned long next_mersenne(unsigned long n) {
    if (n == 0) {
        return 0;
    }
    unsigned long r = 1;
    while (r <= n) {
        r *= 2;
    }
    return r - 1;
}
