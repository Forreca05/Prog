int length(const char s[]) {
    int len = 0;
    while(s[len] != '\0') len++;
    return len;
}

char* duplicate(const char s[]) {
    char* ola = new char[length(s) + 1];
    for (int i = 0; i < length(s); i++) ola[i] = s[i];
    ola[length(s)] = '\0';
    return ola;
}