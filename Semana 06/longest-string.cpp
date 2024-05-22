#include <iostream>

int length(const char s[]) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

const char* longest(const char* pa[]) {
    int i = 0;
    int k = 1;
    while (pa[k] != nullptr) {
        if (length(pa[k]) >= length(pa[i])) {
            i = k;
        }
        k++;
    }
    return pa[i];
}