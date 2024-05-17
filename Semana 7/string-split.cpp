#ifndef __print_string_h__
#define __print_string_h__

#include <string>
#include <vector>
#include <iostream>
using namespace std;

void split(const string& s, vector<string>& v) {
    size_t a = 0, b = 0;
    while(true) {
        b = s.find(' ', a);
        if (b == string::npos) {
            if (!s.substr(a).empty()) // Verifica se a substring não está vazia antes de adicionar
                v.push_back(s.substr(a));
            break;
        }
        if (!s.substr(a, b - a).empty()) // Verifica se a substring não está vazia antes de adicionar
            v.push_back(s.substr(a, b - a));
        a = b + 1;
    }
}

//! Print vector of strings.
void print(const vector<string>& v) {
  cout << "[ ";
  for (size_t i = 0; i < v.size(); i++) {
    cout << '\"' << v[i] << "\" ";
  }
  cout << "]\n";
}

#endif // __print_string_h__

