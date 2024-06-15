#include "cdata.h"
#include <iostream>

int* expand_cdata(const cdata a[], int n) {
    int i = 0, s = 0;
    for (int m = 0; m < n; m++) i += a[m].count;
    int* arr = new int[i];
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < a[i].count; j++) {
            arr[s] = a[i].value;
            s++;
        }
    }
    return arr;
}