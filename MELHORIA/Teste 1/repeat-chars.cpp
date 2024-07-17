#include <iostream>

int length(const char s[]) {
    int len = 0;
    while (s[len] != '\0') len++;
    return len;
}

char* repeat_chars(const char str[], int max_repeat) {
    char* arr= new char[length(str) * max_repeat];
    int s = 0;
    for (int i = 1; i < length(str); i++) {
        if (i < max_repeat) {
            for (int l = 0; l < i; l++) arr[s++] = str[i];
        }
        else {
            for (int l = 0; l < max_repeat; l++) arr[s++] = str[i];
        }
    }
    arr[s] = '\0';
    return arr;
}

int main() { const char str[] = "C+ + !";
  char *r = repeat_chars(str, 1);
  std::cout << "\"" << r << "\"\n";
  delete[] r; }