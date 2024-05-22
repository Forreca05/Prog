#include <string>

bool pangram(const std::string& s, std::string& m) {
    int j[26] = {0};
    for (size_t i = 0; i < s.length(); i++) {
        if (tolower(s[i]) >= 'a' && tolower(s[i]) <= 'z') {
            j[tolower(s[i]) - 'a']++;
        }
    }
    m.clear();
    for (int i = 0; i < 26; i++) {
        if (j[i] == 0) {
            m.push_back('a' + i);
        }
    }
    return m.empty();
}