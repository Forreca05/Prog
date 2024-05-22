#include <iostream>

int adigits(int a, int b, int c) {
    int big = std::max(a, std::max(b,c));
    int small = std::min(a, std::min(b,c));
    int medium = a + b + c - big - small;
    return big * 100 + medium * 10 + small;
}
