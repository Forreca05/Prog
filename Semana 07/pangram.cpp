#include <iostream>
#include <string>

bool pangram(const std::string& s, std::string& m) {
    int count[26] = {0};
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            if (tolower(s[i]) >= 'a' && tolower(s[i]) <= 'z') {
                count[tolower(s[i]) - 'a']++;
            }
        }
    }
    m.clear();
    for (int i = 0; i < 26; i++) {
        if (count[i] == 0) {
            m.push_back('a' + i);
        }
    }
    return m.empty();
}