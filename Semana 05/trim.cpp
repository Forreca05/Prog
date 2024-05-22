#include <iostream>
using namespace std;

int length(const char str[]) {
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

void copy(const char j[], char s[]) {
    for (int i = 0; i < length(j); i++)
        s[i] = j[i];
    s[length(j)] = '\0';
}

bool is_letter(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');     
}

void trim(char s[]) {
    char j[100] = {0};    //unico possivel erro, se array for maior que 100//
    int pos = 0;
    int start = 0;
    int end = length(s) - 1;
    
    // Encontrar o índice do primeiro caractere que não é espaço
    while (start <= end && s[start] ==' ') {
        start++;
    }

    // Encontrar o índice do último caractere que não é espaço
    while (end >= 0 && s[end] == ' ') {
        end--;
    }

    // Copiar os caracteres relevantes para j
    for (int i = start; i <= end; i++) {
        j[pos++] = s[i];
    }
    j[pos] = '\0'; // Null-terminate j
    copy(j, s);    // Copiar j de volta para s
}