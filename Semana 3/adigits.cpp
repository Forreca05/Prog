#include <iostream>
using namespace std;

int adigits(int a, int b, int c) {
    int big = max(a, max(b,c));
    int small = min(a, min(b,c));
    int medium = a + b + c - big - small;
    return big * 100 + medium * 10 + small;
}