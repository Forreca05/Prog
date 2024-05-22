#include <iostream>
using namespace std;

int max(const int a[], int n) {
    int result = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > result) {
            result = a[i];
        }
    }
    return result;
}
