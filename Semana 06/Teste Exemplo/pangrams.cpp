#include <iostream>
using namespace std;

int length(const char s[]) {
    int len = 0;
    while(s[len] != '\0') {
        len++;
    }
    return len;
}

bool pangram(const char s[], char m[]) {
    int j[26] = {0};
    int b = 0;
    for (int i = 0; i < length(s); i++) {
        if (toupper(s[i]) >= 'A' && toupper(s[i]) <= 'Z') {
            j[toupper(s[i]) - 'A']++;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (j[i] == 0) {
            m[b++] = 'a' + i;
        }
    }
    m[b] = '\0';
    return (b > 0) ? false: true;
}