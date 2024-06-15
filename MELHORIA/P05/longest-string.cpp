int length(const char s[]) {
    int len = 0;
    while (s[len] != '\0') len++;
    return len;
}

const char* longest(const char* pa[]) {
    int i = 0, s = 0;
    while (pa[i + 1] != nullptr) {
        if (length(pa[i + 1]) >= length(pa[s])) s = i+1;
        i++;
    }
    return pa[s];
}