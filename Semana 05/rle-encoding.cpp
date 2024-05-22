#include <iostream>
using namespace std;

void int_to_string(int n, char str[], int& pos) {
    while (n > 0) {
        str[pos++] = '0' + (n % 10);
        n /= 10;
    }
}

void rle_encode(const char str[], char rle[]) {
    int pos = 0;
    char current = str[0];
    int count = 1;

    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] == current) {
            count++;
        } else {
            int_to_string(count, rle, pos);
            rle[pos++] = current;
            count = 1;
            current = str[i];
        }
    }

    int_to_string(count, rle, pos);
    rle[pos++] = current;
    rle[pos] = '\0';
}
