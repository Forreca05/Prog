#include <iostream>
using namespace std;

int length(const char str[]) {
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

char* repeat(const char str[], int n) {
    char *c = new char[length(str) * n + 1];
    int a = 0, i = 0;

    while (i != length(str) * n) {
        if (a == length(str)) {
            a = 0;
        }
        c[i++] = str[a++];
    }

    c[i] = '\0';
    return c;
}
