#include <iostream>
using namespace std;

int length(const char str[]) {
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

unsigned long long hstr_to_integer(const char hstr[]) {
    unsigned long long result = 0;
    int len = length(hstr);
    for (int i = len - 1; i >= 0; i--) {
        char c = hstr[i];
        unsigned long long digit_value = 0; 
        if (c >= '0' && c <= '9') {
            digit_value = c - '0';
        }
        else if (c >= 'a' && c <= 'f') {
            digit_value = c - 'a' + 10;
        }
        else if (c >= 'A' && c <= 'F') {
            digit_value = c - 'A' + 10;
        }
        result += digit_value << ((len - 1 - i) * 4); 
    return result;
}