#include "print_array.h"

int filter_duplicates(const int a[], int n, int b[]) {
    int s = 1;
    b[0] = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] != a[i-1]) {
            b[s] = a[i];
            s++;
        }
    }
    return s;
}