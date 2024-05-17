#include <iostream>
using namespace std;

int length(const char str[]) {
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

bool is_letter(char c) {
    return (c >= 'A' && c <= 'Z');
}

int nrl(const char s[], char low[]) {
    int g[26] = {0};
    for (int i = 0; i < length(s); i++) {
        char c = toupper(s[i]);
        if (is_letter(c)) {
            int index = c - 'A';
            g[index]++;
        }
    }

    int non_repeated = 0;
    int low_pos = 0;

    for (int i = 0; i < 26; i++) {
        if (g[i] == 1) {
            low[low_pos++] = 'a' + i;
            non_repeated++;
        }
    }
    low[low_pos] = '\0';
    return non_repeated;
}