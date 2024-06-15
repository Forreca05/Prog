int length(const char s[]) {
    int len = 0;
    while (s[len] != '\0') len++;
    return len;
}

char* repeat(const char str[], int n) {
    char* arr = new char[length(str) * n + 1];
    int s = 0;
    for ( int i = 0; i < length(str) * n; i++) {
        if (s == length(str)) {s = 0;}
        arr[i] = str[s];
        s++;
    }
    arr[length(str) * n] = '\0';
    return arr;
}